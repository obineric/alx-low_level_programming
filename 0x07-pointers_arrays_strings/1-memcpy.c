#include "main.h"

/**
 * _memcpy - program to copy n part of the memory area of a string to another string 
 *
 * @dest: destination string
 *
 * @src: source string
 *
 * @n: limit
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
