#include "main.h"

/**
 * reset_to_98 - entry point
 * @n: takes integer type of adrresses of var
 * Description: takes adress of int variable and change to 98
 * Return: void
 */

void reset_to_98(int *n)
{

	*(&n) = 98;
}
