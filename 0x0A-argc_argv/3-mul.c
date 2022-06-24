#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point for program
 * @argc: argument count
 * @argv: array of arguments
 * Return: zero is success and -1 is failed
 */

int main(int argc, char *argv[])
{
	int result = 0;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (-1);
	}
	else
	{
		result = atoi(argv[2]) * atoi(argv[1]);
		printf("%d\n", result);
		return (0);
	}
}
