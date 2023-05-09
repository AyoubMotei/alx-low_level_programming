#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <elf.h>
#include <unistd.h>
#include <string.h>

#define BUFFER_SIZE 64

void print_error(char *msg) {
    fprintf(stderr, "Error: %s\n", msg);
    exit(98);
}

void print_elf_header(Elf64_Ehdr *hdr) {
    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++)
        printf("%02x ", hdr->e_ident[i]);
    printf("\n");
    printf("  Class:                             %s\n", hdr->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("  Data:                              %s\n", hdr->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "unknown data encoding");
    printf("  Version:                           %d (current)\n", hdr->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %s\n", hdr->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "unknown OS/ABI");
    printf("  ABI Version:                       %d\n", hdr->e_ident[EI_ABIVERSION]);
    printf("  Type:                              ");
    switch (hdr->e_type) {
        case ET_NONE: printf("NONE (No file type)\n"); break;
        case ET_REL: printf("REL (Relocatable file)\n"); break;
        case ET_EXEC: printf("EXEC (Executable file)\n"); break;
        case ET_DYN: printf("DYN (Shared object file)\n"); break;
        case ET_CORE: printf("CORE (Core file)\n"); break;
        default: printf("unknown file type\n");
    }
    printf("  Entry point address:               0x%x\n", (unsigned int) hdr->e_entry);
}

int main(int argc, char *argv[]) {
    if (argc != 2)
        print_error("usage: elf_header elf_filename");

    int fd = open(argv[1], O_RDONLY);
    if (fd == -1)
        print_error("cannot open file");

    Elf64_Ehdr hdr;
    if (read(fd, &hdr, sizeof(hdr)) != sizeof(hdr))
        print_error("cannot read ELF header");

    if (memcmp(hdr.e_ident, ELFMAG, SELFMAG) != 0)
        print_error("not an ELF file");

    print_elf_header(&hdr);

    return 0;
}

