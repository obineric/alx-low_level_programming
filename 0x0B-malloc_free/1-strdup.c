#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - program to copy a string to a memory location
 * @str: string input
 * Return: array containing copied string
 */

char *_strdup(char *str)
{
	char *ptr;
	int i;

	if (str == NULL)
		return (NULL);
	if ((!ptr == malloc(*str)))
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
