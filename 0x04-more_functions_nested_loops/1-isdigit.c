#include "main.h"

/**
 * _isdigit - program to check if an input is a digit
 *
 * @c: input
 *
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
