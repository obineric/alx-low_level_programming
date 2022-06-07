#include "main.h"

/**
 * _islower: program designed to test if the input is a lowercase letter
 *
 * Return: 1 (successful), 0 (others)
 *
 * @c: the charcter to test
 *
 * Decription: checks to see if the input is a lowercase alphabet
 */
int _islower(int c)
{
	return (c >= 97 && c <= 122);
}
