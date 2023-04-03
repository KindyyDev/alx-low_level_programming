#include "main.h"


/**
 * _memset - fills memory with a constant byte
 * @s: a memory buffer
 * @b: the byte to fill the memory
 * @n: is the number of bytes to fill in the memory
 *
 * Return: the memory buffer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
