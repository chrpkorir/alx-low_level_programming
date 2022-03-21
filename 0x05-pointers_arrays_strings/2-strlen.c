#include "main.h"

/**
 * _strlen - a function that returns length of a string
 * Return: string length
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;
	return (n);
}

