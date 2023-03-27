#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords for the program 101-crackme.
 * Return: Always 0.
 */
int main(void)
{
int i, sum, diff, c;
int password[20];
srand(time(NULL));
sum = 0;
i = 0;
while (sum < (2772 - 122))
{
 password[i] = rand() % 62;
 sum += password[i] + 48;
  i++;
}
 diff = sum - (2772 - 122);
 password[i] = diff - 48;
 i++;
 for (; i < 20; i++)
 {
  c = rand() % 62;
  password[i] = c + 48;
 }
 printf("%s", "Key: ");
 for (i = 0; i < 20; i++)
 printf("%c", password[i]);
 printf("\n");
 return (0);
}
