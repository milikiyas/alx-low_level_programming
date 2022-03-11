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
	int n, lastdigit;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		lastdigit = n % 10;
			scanf("%d", &n);
		if (lastdigit > 5)
		{ 
			printf("%s %d %s %d %s", "last digit of", n, "is", lastdigit, "and is greater than 5");
 		}
		if (lastdigit == 0)
		{
		 	printf("%s %d %s %d %s", "last digit of", n, "is", lastdigit, "and is 0");
		}
		if (lastdigit < 6 && lastdigit != 0)
		{
			printf("%s %d %s %d %s", "last digit of", n, "is", lastdigit, "and is less 6 and not 0");
		}
		/* your code goes there */
		return (0);
}
