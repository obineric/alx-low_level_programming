#include <stdio.h>

/**
 * main - entry point of program
 * @argc: arguments count
 * @argv: array input
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
