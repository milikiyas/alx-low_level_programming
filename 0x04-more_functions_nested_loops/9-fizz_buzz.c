#include<stdio.h>
/**
 * main - entry point
 *
 * Description: print Fizz_Buzz
 *
 * Return: 0 always
 */
int main(void)
{
	int i;

for (i = 1; i <= 100; i++)
	{
	if (i % 3 == 0 && i % 5 == 0)

		printf("FizzBuzz\n");

	else if (i % 5 == 0)

		printf("Buzz\n");

	else if (i % 3 == 0)

		printf("Fizz\n");
	else
		printf("%d\n", i);
	}

	return (0);
}
