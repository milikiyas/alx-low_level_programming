#include "main.h"
/**
 * print_last_digit - this function prints out the last digit of an integer
 *
 * @n: takes a value of intger
 *
 * Return: ln  always (success))
 */
int print_last_digit(int n)
{
	int ln = n % 10;

	if (n < 0)
	ln = ln * -1;

	_putchar(ln +'0');
	return (ln);
}
