#include "main.h"
/**
 * print_diagonal - entry point
 *
 * @n: takes integer value
 * Description: draws a diagonal line on the terminal using _putchar
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j, k;

	k = 92;

		if (n <= 0)
		{
			_putchar('\n');
		}
		else if (n > 0)
		{
			for (j = 1; j <= n; j++)
			{
				for (i = 0; i <= i -1; i++)
				{
					_putchar(' ');
				}
				_putchar(k);
				_putchar('\n');
			}
		}
}
