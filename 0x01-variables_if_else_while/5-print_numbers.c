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
	int n;
	char str[11] = "0123456789";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for (n = 0; n < 10; n++)
	{
		putchar(str[n]);
	}
	putchar('\n');
	return (0);
}
