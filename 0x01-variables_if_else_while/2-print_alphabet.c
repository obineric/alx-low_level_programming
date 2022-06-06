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
	char str[27] = "abcdefghijklmnopqrstuvwxyz";
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for (n = 0; n < 26; n++)
	{
		putchar(str[n]);
		putchar('\n');
	}
	return (0);
}
