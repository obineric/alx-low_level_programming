#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - program to calculate length of string
 * @s: string input
 * Return: length
 */

int _strlen(char *s)
{
	int len;

	len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
/**
 * _strdup - program to duplicate string
 * @str: string input
 * Return: char
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, size;

	if (str == NULL)
		return (NULL);
	size = _strlen(str);
	ptr = malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
