#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that prints alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lc, alpha_e, alpha_q;

	alpha_e = 'e';
	alpha_q = 'q';

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != alpha_e && lc != alpha_q)
			putchar(lc);
	}
	putchar('\n');

	return (0);
}
