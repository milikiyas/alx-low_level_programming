#include "main.h"

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

	char c = '+';
	char b = '-';
	char d = '0';

	if (n > 0)
	{
		return (1);
		_putchar(c);
	}
	if (n == 0)
	{
		return (0);
		_putchar(d);
	}
	if (n < 0)
	{
		int f = -1;
		return f;
		_putchar(b);
	}
}

