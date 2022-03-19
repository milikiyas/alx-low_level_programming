#include "main.h"
/**
 * print_triangle - main entry
 * @size: takes in integer value
 *
 *Description: prints a triangle, followed by a new line
 .
 * Return: void 
 */
 void print_triangle(int size)
{
	int i, j, k;
	  
	if (size <= 0)
	{
		_putchar('\n');
	}

		for (i = 1; i <= size; i++)
		{

			if ( size > 0)
			{
				for (j = 1; j <= (size - i); j++)
				{
					_putchar(' ');
				}
				for (k = 1; k <= i; k++)
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
}
