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
	int i, len;

	len = 0;

	while (*(dest + len) != '\0')
		len++;

	i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + len + i) = *(src + i);
		i++;
	}

	return (dest);
}
