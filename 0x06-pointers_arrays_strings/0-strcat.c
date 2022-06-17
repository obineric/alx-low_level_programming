#include "main.h"
#include <string.h>

/**
 * _strcat - program to concatenate two strings
 *
 * @dest: destination input
 *
 * @src: source input
 *
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (*(dest + i) != '\0')
		i++;

	j = 0;

	while (*(src + j) != '\0')
	{
		*(dest + i + j) = *(src + j);
		j++;
	}

	return (dest);
}
