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
	int len_dest = (int) strlen(dest);
	int len_src = (int) strlen(src);
	int i;

	for (i = 0; i < len_src && src[i] !=  '\0'; i++)
	{
		dest[len_dest + i] = src[i];
	}
	char *temp = dest;
	return temp;
}
