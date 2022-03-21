#include "main.h"
/**
 * _isupper - check whether it is upper case or not
 * @c: accept input to check
 * Return: 1 if upper else 0
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	return (0);
}
