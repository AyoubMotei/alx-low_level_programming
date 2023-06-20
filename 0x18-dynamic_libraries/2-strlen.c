#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: passed string
 *
 * Return: the length of passed string
 */
int _strlen(char *s)
{
	int i, size = 0;

	for (i = 0; s[i] != '\0'; i++)
		size++;
	return (size);
}
