#include "main.h"

/**
 * _abs - this program outputs the absolute value of integers
 *
 *@n: integer input
 *
 * Retun: nothing
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	else
	{
		return (n);
	}
}
