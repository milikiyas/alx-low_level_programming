#include "main.h"
/**
 * _isupper - checks for uppercase character
 *
 * @c: takes in integer value of character
 * Return: 1 if c is upprcase || 0 otherwise
 */
int _isupper(int c);
{
	if (c >= 'A' && c <= 'Z')
	{
		_putchar(c);
		_putchar(':');
		_putchar(' ');
		return (1);
	}
	else if ( c >= 'a' && c <= 'z')
	{
		_putchar(c);
		_putchar(':');
		_putchar(' ');
		_return (0);
	}
}
