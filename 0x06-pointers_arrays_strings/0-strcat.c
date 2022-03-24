#include "main.h"
#include <string.h>

/**
 * _stcat - function that concatenates two strings
 * @dest: string to append to
 * @src: string to append
 * Return: a pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *org = dest;

	while (*dest++)
	{
		;
	}
	//at this moment *dest must be pointing to '\0'
	while (*dest++ = *src++)
	{
		;
	}
	//at this moment, *dest Must be pointing to '\0' again
	return org;
}
