/*
 * File: 3-print_alphabets.c
 * Auth:Chepkorir Faith
 */
#include <stdio.h>

/**
 * Main - Prints the alphabet in lowercase, and then in uppercase.
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
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar ('\n');
	return (0);	
}
