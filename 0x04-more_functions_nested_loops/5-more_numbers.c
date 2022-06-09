#include "main.h"

/**
 * more_numbers - prints digits 1 to 14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int j;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
			else
			{
				_putchar(j + '0');
			}
		}
		/*_putchar('\n');*/
	}
}
