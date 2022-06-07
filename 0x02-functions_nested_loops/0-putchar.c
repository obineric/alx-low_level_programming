#include "main.h"

/**
 * main - Program to output _putchar to the standard output 
 *
 * Return: 0
 *
 */

int main(void)
{
	char c[9] = "_putchar";
	int n;

	for (n = 0; n < 8; n++)
	{
		_putchar(c[n]);
	}
	_putchar('\n');
	return (0);
}
