#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

void printWord(char* name)
{
	putchar(name);
	putchar('\n');
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printWord("_putchar");
	return (0);
}
