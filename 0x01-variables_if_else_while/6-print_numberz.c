#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	putchar('0123456789');
	putchar('\n');
	return (0);
}
