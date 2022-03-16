#include "main.h"
/**
 * _abs - computes the absolute value of an intger
 *
 * @n: takes an integer value
 *
 * Returns: p if n < 0  n if n >= 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		int p;

		p = n * -1;
		return (p);
	}
	else
	{
		return (n);
	}
}

