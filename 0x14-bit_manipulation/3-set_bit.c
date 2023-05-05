#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/** check if the index is within the bounds of the number */
	if (index > 63)
		return (-1);

	/** set the bit at the given index to 1 by performing a bitwise OR with a 1 at the index */
	*n = ((1UL << index) | *n);

	/** return 1 to indicate success */
	return (1);
}

