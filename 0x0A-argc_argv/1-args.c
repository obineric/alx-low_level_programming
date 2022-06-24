#include <stdio.h>

int main(int argc, char* argv[])
{
	argv[argc] = '\0';
	if (argc > 0)
		printf("%d\n", argc);
	return (0);
}
