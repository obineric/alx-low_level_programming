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
	int i;

	for (i = 1; i <= size; i++)
	{
		int m, j;

		for (m = 1, m < (size - i); m++)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
	}
}
