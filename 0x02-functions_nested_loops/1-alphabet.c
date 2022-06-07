#include "main.h"

/**
 * main - Program to output the lowercase alphabets from a to z
 *
 * Return: 0
 *
 */
void print_alphabet(void)
{
 	char c = "abcdefghijklmnopqrstuvwxyz";
	int i;
	for (i = 0; i < 26; i++)
	{
		_putchar(c[i]);
	}
	return (0);
}
