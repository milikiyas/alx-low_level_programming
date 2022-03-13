#include<stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 ((success))
 */

int main(void)
{
	int d, l, k;

	d = 48;
	l = 44;
	k = 57;

	while (d <= 56)
	{
		putchar(d);
		d++;
		putchar(l);
		putchar('\x20');

	}
	while (k <= 57)
	{
		putchar(k);
		k++;
	}

	return (0);
}
