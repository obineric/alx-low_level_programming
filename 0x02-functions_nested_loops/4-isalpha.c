#include "main.h"

/**
 * _isalpha - program designed to test if the input is an aplhabet
 *
 * Return: 1 (successful), 0 (others)
 *
 * @c: the charcter to test
 *
 * Decription - checks to see if the input is an alphabet
 */
int _isalpha(int c)
{
	return (c >= 97 && c <= 122) || (c >= 65 && c<= 90);
}
