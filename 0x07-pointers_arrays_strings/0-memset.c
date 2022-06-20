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
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
