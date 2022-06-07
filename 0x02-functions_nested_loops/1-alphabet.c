#include  <main.h>

/**
 * print_alphabet - Program to print the letters of the alphabets
 *
 * Return: Always successful
 */
void print_alphabet(void)
{
	char alp[27] = "abcdefghijklmnopqrstuvwxyz";
	int m;

	for (m = 0; m < 26; m++)
	{
		_putchar(alp[m]);
	}
	_putchar('\n')
}
