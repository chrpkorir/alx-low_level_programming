#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set
 * of bytes
 * @s: string to be located
 * @accept: string to be compared to
 * Return: s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}

	return ('\0');
}
