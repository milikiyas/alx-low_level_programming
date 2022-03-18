#include "main.h"

/**
 * _isdigit - this function checks for a digit (0 through 9)
 *
 * @c: takes in integer value
 * Return: 1 if c is digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
