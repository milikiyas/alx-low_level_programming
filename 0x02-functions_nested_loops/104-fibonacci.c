#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci
 * Return: 0 always
 */
int main(void)
{
	int i;

	unsigned long a = 0;
	unsigned long b = 1;
	unsigned long r = a + b;

	for (i = 0; i < 98; i++)
	{
		if (i < 97)
			printf("%lu, ", r);
		else
			printf("%lu\n", r);
		a = b;
		b = r;
		r = a + b;
	}
	return (0);
}
