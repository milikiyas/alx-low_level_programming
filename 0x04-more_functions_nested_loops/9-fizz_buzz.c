#include "main.h"
#include<stdio.h>
/**
 * fizz_buzz - entry point
 *
 * Description: prints the numbers from 1 to 100, But for multiples of three print Fizz
 * and for the multiples of five print Buzz and multiples of both three and five print FizzBuzz.
 *
 * Return: void
 */
void fizz_buzz(void)
{
	int i;
		for (i = 1; i <= 100; i++)
		{
			if (i % 3 == 0 && !(i % 5 == 0))
			{
				printf("Fizz");
			}
			else if ((i % 5 == 0)  && !(i % 3 == 0))
					{
					printf("Buzz");
					}
			else if (i % 5 == 0 && i % 3 == 0)
			{
				printf("FizzBuzz");
			}
			else
			{
				printf("%d", i);
			}
		}
		putchar('\n');
}


					
