#include "main.h"

/**
 * _strncpy - program to copy one string to another
 *
 * @dest: destination input
 *
 * @src: source input
 *
 * @n: input to show limit
 *
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		if (*(dest + i) == '\0')
		{
			*(dest + i) = '\0';
		}
		else
		{
			*(dest + i) = *(src + i);
		}
		i++;
	}
	return (dest);
}
