#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
		int n;
		n = 0;
		srand(time(0));
	        n =n + rand() -RAND_MAX / 2;
/* your code goes there */
		return (0);
}
