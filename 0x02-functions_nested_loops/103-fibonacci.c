#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci
 * Return: 0 always
 */
int main(void)
{
	long a = 0;
	long b = 1;
	long r = a + b;
	long sum = 0;

	while (b < 4000000)
	{
		if ((r % 2) == 0)
			sum += r;
		a = b;
		b = r;
		r = a + b;
	}
	printf("%ld\n", sum);
	return (0);
}
