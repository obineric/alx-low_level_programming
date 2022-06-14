#include "main.h"
#include <stdio.h>

/**
 * print_array - program to print the members of an array
 *
 * @a: input array
 *
 * @n: number of input to print
 *
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i <  n - 1)
			{
				printf("%d, ", a[i]);
			}
			else
			{
				printf("%d\n", a[i]);
			}
		}
	}
	else
	{
		printf("%d", a[0]);
	}
}
