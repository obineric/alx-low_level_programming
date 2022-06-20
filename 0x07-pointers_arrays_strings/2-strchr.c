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
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		else
		{
			return ('\0');
		}
	}
}
