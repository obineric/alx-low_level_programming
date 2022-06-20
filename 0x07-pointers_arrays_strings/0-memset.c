#include "main.h"

/**
 * _memset - program to fill a memory area with a constant byte
 *
 * @s: string input
 *
 * @b: constant byte
 *
 * @n: limit
 *
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i, *ptr;
	int const *limit = (s + n);

	for (ptr = s; ptr < limit; ptr++)
	{
		*ptr = 'b';
	}
}
