#include "main.h"

/** _strlen_recursion - program that returns length of string
 * @s: string input
 * Return: length in intergers
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
