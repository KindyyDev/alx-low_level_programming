#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that prints alphabet in lower and upper case
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
