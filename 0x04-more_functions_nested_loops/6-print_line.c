#include "main.h"
/**
 * print_line - entry point
 *
 *@n: takes an integer value
 * Description: draws a straight line in the terminal using putchar
 *
 * Return: void
 */
void print_line(int n)
{

		int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
