#include "main.h"

/**
 * _islower: program designed to test if the input is a lowercase letter
 *
 * Return: 1 (successful), 0 (others)
 *
 */
int _islower(int c)
{
	\* the input c is checked to see if it is a lowercase letter
	return (c >= 97 && c <= 122);
}
