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
	char *pnew = NULL;

	dest = strcat(dest, src);
	strcat(dest, '\0');
	*pnew = dest;
}
