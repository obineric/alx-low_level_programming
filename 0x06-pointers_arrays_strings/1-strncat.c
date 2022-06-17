#include "main.h"

/**
 * _strncat - program to concatenate two strings up to a point n
 *
 * @dest: destination input
 *
 * @src: source input
 *
 * @n: point at which copy ends
 *
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (*(dest + i) != '\0')
		i++;

	j = 0;

	while (*(src + j) != '\0' && j < n)
	{
		*(dest + i + j) = *(src + j);
		j++;
	}

	return (dest);
}
