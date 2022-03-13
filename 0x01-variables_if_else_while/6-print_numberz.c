#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: alwas 0 ((success)
 */
int main(void)
{
	char n_m = '0';

	while (n_m <= '9')
	{
		putchar(n_m);
		n_m++;
	}
	putchar('\n');
	return (0);

}

