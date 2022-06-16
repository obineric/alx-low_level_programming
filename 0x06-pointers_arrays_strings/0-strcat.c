#include "main.h"

/**
 * _strcat - program to concatenate two strings
 *
 * @dest: destination input
 *
 * @src: source input
 *
 * Return: concatenated string
 */

char _strcat(char *dest, char *src)
{
	int dest_len = strlen(dest);
	int src_len = strlen(src);
	int i;

	for (i = 0, i < src_len && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
