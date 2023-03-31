#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate password
 *
 * Return: 0
 */
int main(void)
{
	int result;
	char c;

	srand(time(0));
	while (result <= 2645)
	{
		c = rand() % 120;
		result += c;
		putchar(c);
	}
	putchar(2772 - result);
	return (0);
}
