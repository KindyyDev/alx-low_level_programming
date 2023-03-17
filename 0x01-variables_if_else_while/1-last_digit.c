#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program that uses the last digit to check some conditions
 *
 * Checks:
 * If the last digit is greater than 5
 * If the last digit is 0
 * If the last digit is less than 6 and no 0
 *
 * Declare a variable last_d to hold the last digit of n
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int n;
	int last_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_d = n % 10;
	if (last_d < 6 && last_d != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last_d);
	}
	else if (last_d == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, last_d);
	}
	else
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, last_d);
	}

	return (0);
}
