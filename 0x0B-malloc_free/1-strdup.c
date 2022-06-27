#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - program tio copy a string to a memory location
 * @str: string input
 * Return: array containing copied string
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int i;
	unsigned int size = sizeof(str) - 1;

	if (str == NULL)
		return (NULL);
	if (ptr == malloc(*str))
		for (i = 0; i < size; i++)
		{
			ptr[i] = str[i];
		}
	else
		return (NULL);
	ptr[i] = '\0';
	return (ptr);
}
