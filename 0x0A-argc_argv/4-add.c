#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* agrv[])
{
	int sum;\

	if (argc <= 1)
	{
		printf("0\n");
	}
	else
	{
		while(*agrv++)
		{
			if (!(int(*argv)))
			{
				printf("ERROR\n");
				return (1);
			}
			else
			{
				sum =+ int(*argv);
				printf("%d\n", sum);
			}
		}
	}
	return (0);
}
		
