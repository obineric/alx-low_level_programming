#include "main.h"

/**
 * times_table - Program to print 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;
	int result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 9)
			{
				result = i * j;
				_putchar(result + '0');
				_putchar('$');
				_putchar('\n')
			}
			else
			{
				result = i * j;
				_putchar(result + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}

