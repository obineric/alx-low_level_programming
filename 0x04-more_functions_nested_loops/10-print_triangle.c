#include "main.h"

/**
 * print_triangle - program to draw a triangle using #
 *
 * @size: size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, m, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{

		for (i = 1; i <= size; i++)
		{
			for (m = 1; m <= (size - i); m++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
