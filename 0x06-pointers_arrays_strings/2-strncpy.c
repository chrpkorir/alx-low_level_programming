#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination where conted is copiesd
 * @src: string to be copied
 * @n: number of characters copied from src
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
