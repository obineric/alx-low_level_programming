#include <stdio.h>

/**
 * main - entry point for program
 * @argc: number of arguments
 * @argv: array input
 * Return: zero
 */

int main(int argc, char *argv[])
{
	argv[argc] = '\0';
	if (argc > 0)
		printf("%d\n", argc);
	return (0);
}
