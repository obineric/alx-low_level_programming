#include "main.h"

/**
 * _strlen_recursion - program to return length of a string
 * @s: string input
 * Return: integer value of length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
