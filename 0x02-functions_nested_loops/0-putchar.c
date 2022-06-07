#include "main.h"

/**
 * Function to print _putchar
 *
 * Return: 0
 *
 */

void printchar(void)
{
	char c[9] = "_putchar";
	int n;

	for (n=0; n<9; n++)
	{
		_putchar(c[n]);
	}
}
