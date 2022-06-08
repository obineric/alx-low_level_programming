#include "main.h"

/**
 * print_last_digit - Program to output last digit of a number
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n * (-1);
		return (n % 10);
	}
	else
	{
		return (n % 10);
	}
}
