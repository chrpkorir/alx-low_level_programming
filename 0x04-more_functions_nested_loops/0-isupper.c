# include "main.h"
#include <stdio.h>

/**
 * main - _isupper check for upper case letter
 * @c: Int representing a character
 * Return: 1 if c isuppercase
 * Return: 0 otherwise
 */
int _isupper(int c)
{


	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
