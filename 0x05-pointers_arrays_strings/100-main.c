#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
    int sign = 1;
    int value = 0;

    while (*s)
    {
        if (*s == '-')
            sign *= -1;
        else if (*s >= '0' && *s <= '9')
            value = (value * 10) + (*s - '0');
        else if (value > 0)
            break;

        s++;
    }

    return value * sign;
}

