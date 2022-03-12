#include <stdio.h>

/**
 * Main - 
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z' && ch != 'q' && ch != 'e'; ch++)
	{
		putchar(ch);
	}
	return (0);
}
