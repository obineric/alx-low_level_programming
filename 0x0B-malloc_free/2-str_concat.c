#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - int _strlen(char *s)
 * @s1: input string 1
 * @s2: input string 2
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int size_s1, size_s2;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size_s1 = _strlen(s1);
	size_s2 = _strlen(s2);
	ptr =  realloc(s1, (size_s1 + size_s2 + 1) * sizeof(char));
	for (i = 0, i < size_s2; i++)
	{
		*(ptr + size_s1 + i) = *(s2 + i);
	}
	*(s1 + size_s1 + i) = '\0';
	return (s1);
}
