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

	for (i = 0; i < size; i++)
	{
		int m;
		
		for (m = 0, m < size - 1;
