/*

This function takes two arguments: 'n' which is an unsigned long integer to search, and
'index' which is an unsigned integer indicating the index of the bit to retrieve.
It first checks if the index is valid i.e. less than or equal to 63. If the index is invalid,
the function returns -1. If the index is valid, it extracts the bit value from 'n' using right
shift operator and bitwise AND operator, and returns the bit value.
*/

#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	/** Check if index is valid */

	if (index > 63)
		return (-1);
	/**Extract bit value using right shift and bitwise AND operators */

	bit_val = (n >> index) & 1;

	/**Return the bit value */

	return (bit_val);
}

