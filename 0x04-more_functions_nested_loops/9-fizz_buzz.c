#include "main.h"
#include<stdio.h>
/**
 * main - entry point
 *
 * Description: prints the numbers from 1 to 100, But for multiples of three print Fizz
 * and for the multiples of five print Buzz and multiples of both three and five print FizzBuzz.
 *
 * Return: 0 always
 */
int main(void)
{
	int i;
		for (i = 1; i <= 100; i++)
		{
			if (i % 3 == 0 && !(i % 5 == 0))
			{
				printf("Fizz\n");
			}
			else if ((i % 5 == 0)  && !(i % 3 == 0))
					{
					printf("Buzz\n");
					}
			else if (i % 5 == 0 && i % 3 == 0)
			{
				printf("FizzBuzz\n");
			}
			else
			{
				printf("%d\n", i);
			}
		}
		printf("Buzz\n");
}


					
