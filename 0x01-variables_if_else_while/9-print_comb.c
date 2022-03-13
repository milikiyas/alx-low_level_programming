#include<stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 ((success))
 */

int main(void)
{
	int d, l;

	d = 48;
	l = 44;

	while (d <= 57)
	{
		putchar(d);
		putchar(l);
		putchar('\x20');
		d++;
	}
	
	return (0);
}
