#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that prints all the numbers of base 16
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char lc;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (lc = 'a'; lc <= 'f'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');

	return (0);
}
