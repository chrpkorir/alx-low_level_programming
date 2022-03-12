#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * Main - Assign a random nunber to variable n
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if ((n%10) > 5)
	{
		printf("The last digitt of %d is %d and is greater than 5", n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("The last digit of %d is %d and is less than 6 and not 0", n, n % 10);
	}
	else
	{
		printf(" The last digit of %d is %d and is 0", n, n % 10);
	}
	return (0);
}
