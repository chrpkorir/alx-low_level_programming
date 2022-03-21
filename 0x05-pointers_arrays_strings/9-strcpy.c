#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src,
 * including the terminating null byte(\0)'
 * to the buffer pointed to by dest
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int c = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for ( ; c < i; c++)
	{
		dest[c] = src[c];
	}
	dest[i] = '\0';
	return (dest);
}
