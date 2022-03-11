#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main Entry Point
 *
 * Return: Always 0 ((success))
*/
int main(void)

{

int n, Ls;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Ls = n % 10;
	scanf("%d", &n);
	if (Ls > 5)

		{
			printf("%s %d %s %d %s\n", "Last digit of", n, "is", Ls, "and is greater than 5");
		}
	if (Ls == 0)
		{
			printf("%s %d %s %d %s\n", "Last digit of", n, "is", Ls, "and is 0");
		}
	if (Ls < 6 && Ls != 0)
		{
			printf("%s %d %s %d %s\n", "Last digit of", n, "is", Ls, "and is less than 6 and not 0");
		}
/* your code goes there */
	return (0);
}
