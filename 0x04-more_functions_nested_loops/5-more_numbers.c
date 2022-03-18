#include "main.h"

/**
 * more_numbers - entry point
 *
 * Description: prints 10 times the numbers, from 0 to 14 using _putchar
 * Return: void
 */
void more_numbers(void)
{
	for (k = 1; k <= 10; k++)
	{
		for (m = '0'; m <= '14'; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
	}
}	
