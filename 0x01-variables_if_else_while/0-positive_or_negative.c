#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry poin
 *
 * Return always 0 (success)
*/
int main(void)
{
	int n;
	n = 0;
	n = n + rand() - RAND_MAX / 2;
	srand(time(0));
/* your code goes there */
	return (0);
}
