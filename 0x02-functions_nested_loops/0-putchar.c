#include "main.h"

/**
<<<<<<< HEAD
 * main - Program to output _putchar to the standard output 
=======
 * main - Program to output _putchar to the standard output
>>>>>>> 8079a4f001ad4acf73f8b438b6fedf40ffbf3048
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
