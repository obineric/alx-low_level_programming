#include <stdio.h>

/**
 * main - entry point of program
 * @argc: number of arguments
 * @argv: array input
 * Return: zero
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
