#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/**
 * binary_to_uint - program to convert binary to unsigned integer
 * @b: pointer to binary string
 * Return: Unsigned integer value
 */

unsigned int binary_to_uint(const char *b)
{
	char const *ptr;
	ptr = b;

	if (ptr == NULL)
		return (0);
	else
	{
		int limit = strlen(ptr);
		double sum;
		int j;

		while (*ptr++)
		{
			if ((*ptr != 0) || (*ptr != 1))
				return (0);
		}
		ptr = b;	
		for (j = limit; (ptr[j]); j--)
			sum = (*ptr) * (double)pow((double)2.0,(double)limit);
		return (unsigned int) (sum);
	}
}
