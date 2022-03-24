#include "main.h"

/**
 * _stcat - function that concatenates two strings
 * @dest: string to append to
 * @src: string to append
 * Return: a pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] !+ '\0')
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
