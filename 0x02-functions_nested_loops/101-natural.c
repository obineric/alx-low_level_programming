#include <stdio.h>
#include "main.h"

/**
 * main - program to calculate sum of the multiples of 3 and 5
 *
 * Return: 0
 */
int main(void)
{
	int m;
	int result;

	for (m = 0; m < 1024; m++)
	{
		if ((m % 3) || (m % 5))
		{
			result = result + m;
		}
		else
		{
			continue;
		}
	}
	printf("%d\n", result);
	return (0);
}
