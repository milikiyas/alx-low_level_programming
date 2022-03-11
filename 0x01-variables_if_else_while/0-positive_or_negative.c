#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry poin
 *
 * Return always 0 ((success))
*/
int main(void)
{
	int n;

	n = rand() - RAND_MAX / 2;

	srand(time(0));

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
/* your code goes there */
	return (0);
}
