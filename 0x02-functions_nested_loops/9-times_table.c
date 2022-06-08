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
	int d1;
	int d2;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 9)
			{
				result = i * j;
				if (result <= 9)
				{
					_putchar(result + '0');
					_putchar('$');
					_putchar('\n');
				}
				else
				{
					d1 = result / 10;
					d2 = result % 10;
					_putchar(d1 + 'o');
					_putchar(d2 + '0');
					_putchar('$');
					_putchar('\n');
				}
			}
			else
			{
				result = i * j;
				if (result <= 9)
				{
					_putchar(result + '0');
					_putchar(',');
					_putchar('\t');
				}
				else
				{
					d1 = result / 10;
					d2 = result % 10;
					_putchar(d1 + '0');
					_putchar(d2 + '0');
					_putchar(',');
					_putchar('\t');
				}
			}
		}
	}
}

