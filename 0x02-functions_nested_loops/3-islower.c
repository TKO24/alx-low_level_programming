#include "main.h"

/**
 * _islower - check if c is lower case
 * @c: the character to be tested
 * Return: 1 successful, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
