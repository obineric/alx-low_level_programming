#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function to create customized array
 * @size: size of the array
 * @c: char to initialize array with
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if ((size == 0) || (ptr == NULL))
		return (NULL);
	else
	{
		ptr = malloc(size * sizeof(char));
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
		ptr[i] = '\0';
	}
	return (ptr);
}
