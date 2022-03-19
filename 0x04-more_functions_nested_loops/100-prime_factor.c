#include <stdio.h>
/**
 * main - entr point
 *
 * Return: 0 always
 */

int main(void)
{
	int odd_prime, max_prime;
	long long num = 612852475143;

	odd_prime = 3;
	max_prime = 0;

	while (num % 2 == 0)
	{
		max_prime = 2;
		num /= 2;
	}
	while (num != 1)
	{
		while (num % odd_prime == 0)
		{
			max_prime = odd_prime;
			num /= odd_prime;
		}
			odd_prime = odd_prime + 2;
	}
			printf("%d", max_prime);
			return (0);
}

