#include <stdio.h>

/**
 * Main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* print lowercase letters */
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	/* print uppercase letters */
	for (ch= 'A'; ch<= 'Z'; ch++)
		putchar(ch);

	putchar ('\n') ;
	
	return (0);	
}
