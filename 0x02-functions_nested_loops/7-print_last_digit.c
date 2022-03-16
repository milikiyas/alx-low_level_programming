#include "main.h"
/**
 * print_last_digit - this function prints out the last digit of an integer
 *
 * @n: takes a value of intger
 *
 * Return: last_digit  if n >= 0 || 0 if n < 0
 */
int print_last_digit(int n);


{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
	{
		_putchar('last_digit' * -1);
		return (0);
	}
	return (last_digit);
	_putchar('\n');
}
