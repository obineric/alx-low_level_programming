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
	while (*s)
	{
		if (*s == c);
		{
			break;
		}
		*s++;
	}
	return (s);
}
