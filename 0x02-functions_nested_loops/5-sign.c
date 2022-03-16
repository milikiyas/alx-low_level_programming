#include "main.h"
#include <stdio.h>

/**
 * -sign.c - prints + if n is greater than zero or else print 0 if n is zero otherwise it print - if n is less than zero
 *
 *  @n: takes any number
 *
 *  Return: 1 if n is greater than zero -1 if n less than zero else 0 n equals to zero
 *
 */
int print_sign(int n)
{

	int c = 43;
	int b = 45;
	int d = 48;

	if (n > 0)
	{
		printf("%d", n);
		_putchar(44);
		_putchar(32);
		_putchar(c);
		return (1);
	}
	else if (n == 0)
	{
		printf("%d", n);
		_putchar(44);
		_putchar(32);
		_putchar(d);
		return (1);
	}
	else if (n < 0)
	{
		int f = -1;

		_putchar(b);
		printf("%d", n);
		_putchar(44);
		_putchar(32);
		return f;
	}
	
}

