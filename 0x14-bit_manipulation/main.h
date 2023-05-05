/*
 * This is a header file named "main.h" that contains declarations for several
 * functions that operate on binary and decimal numbers.
 *
 * The functions declared in this header file are:
 * - binary_to_uint: This function converts a binary string to an unsigned integer.
 * - print_binary: This function prints the binary representation of a decimal number.
 * - get_bit: This function gets the value of the bit at a given index in a decimal number.
 * - set_bit: This function sets the value of the bit at a given index in a decimal number.
 * - clear_bit: This function clears the value of the bit at a given index in a decimal number.
 * - flip_bits: This function flips the values of the bits in two decimal numbers.
 * - _atoi: This function converts a string to an integer.
 * - _putchar: This function writes a character to standard output.
 * - get_endianness: This function determines the endianness of the system.
 *
 * The header file uses #ifndef and #define to ensure that the declarations are
 * included only once in a program.
 */


#ifndef MAIN_H
#define MAIN_H

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int _atoi(const char *s);
int _putchar(char c);
int get_endianness(void);

#endif


