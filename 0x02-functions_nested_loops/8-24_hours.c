#include "main.h"

/**
 * jack_bauer - program to countdown through 24 hours of the day
 *
 * Return: returns nothing
 */
void jack_bauer(void)
{
	int count;
	int hour;
	int min;
	int h1;
	int h2;
	int m1;
	int m2;

	for (count = 0; count < 1440; count++)
	{
		hour = count / 60;
		min = count % 60;
		h1 = hour / 10;
		h2 = hour % 10;
		m1 = min / 10;
		m2 = min % 10;
		_putchar(h1 + '0');
		_putchar(h2 + '0');
		_putchar(':');
		_putchar(m1 + '0');
		_putchar(m2 + '0');
		_putchar('\n');
	}
}
