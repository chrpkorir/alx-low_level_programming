#include "main.h"

/**
 * _islower - function to check for lowercase character.
 * @c: The character to print
 *
 * Return: 1 if c is lower case, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
