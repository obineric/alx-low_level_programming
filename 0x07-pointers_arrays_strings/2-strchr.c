#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a char in a string
 *
 * @s: string
 *
 * @c: charcter being searched for
 *
 * Return: char
 */

char *_strchr(char *s, char c)
{
	int i;
	char **ptr;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			ptr = (s + i);
			break;
		}
		else
		{
			ptr = '\0';
		}
	}
	return (*ptr);
}
