#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	/** Check if index is greater than 63, which is the maximum number of bits */
	if (index > 63)
		return (-1);

	/** Clear the bit at the given index by using a bitwise NOT operator
	and a left shift operation to create a mask with a 0 at the bit index
	and all other bits set to 1. This mask is then ANDed with the original
	 number to clear the bit at the given index.*/
	*n = (~(1UL << index) & *n);

	return (1);
}

