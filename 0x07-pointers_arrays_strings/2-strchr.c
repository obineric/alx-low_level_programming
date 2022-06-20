#include "main.h"

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
	int i, **ptr;

	for (ptr = &s; ptr != '\0'; ptr++)
	{
		if (*ptr == c)
		{
			return (ptr);
		}
	}
	return (s);
}
