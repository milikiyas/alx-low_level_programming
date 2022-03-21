#include "main.h"

/**
 * swap_int - entry point
 * @a: takes in integer value
 * @b: takes in integer value
 * Description: swabs value of a to b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int *n;
	int c;

	c = 12;
	n = &c;
	*n = *b;
	*b = *a;
	*a = *n;
}
