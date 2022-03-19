#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci
 * Return: 0 always
 */
int main(void)
{
	int i;

	long a = 0;
	long b = 1;
	long r = a + b;

	for (i = 0; i < 50; i++)
	{
		if (i < 49)
			printf("%ld, ", r);
		else
			printf("%ld\n", r);
		a = b;
		b = r;
		r = a + b;
	}
	return (0);
