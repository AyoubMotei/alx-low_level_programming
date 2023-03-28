#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char password[84];
    int pass_len, checksum, i;

    if (argc != 2)
    {
        printf("Usage: %s <password>\n", argv[0]);
        return 1;
    }

    pass_len = strlen(argv[1]);
    if (pass_len != 15)
    {
        printf("Wrong password\n");
        return 1;
    }

    checksum = 0;
    for (i = 0; i < pass_len; i++)
    {
        checksum += argv[1][i];
    }

    if (checksum != 0x55f1f9e5)
    {
        printf("Wrong password\n");
        return 1;
    }

    memcpy(password, argv[1], pass_len);
    if (strcmp(password, argv[1]) != 0)
    {
        printf("Wrong password\n");
        return 1;
    }

    printf("Tada! Congrats\n");
    return 0;
}
