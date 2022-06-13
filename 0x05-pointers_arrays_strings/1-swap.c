#include "main.h"

/**
 * swap_int - program to swap the value of two intergers
 *
 * @a: input 1
 *
 * @b: input 2
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tempa, tempb;

	tempa = *b;
	tempb = *a;
	*b = tempb;
	*a = tempa;
}
