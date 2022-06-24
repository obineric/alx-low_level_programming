#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
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
