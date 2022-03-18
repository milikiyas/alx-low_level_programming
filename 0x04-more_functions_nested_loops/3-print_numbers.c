#include "main.h"

/**
 * print_numbers - entry point
 *
 * Description: prints the number with _putchar
 *
 * Return: void
 */

void print_numbers(void)
{
	for (int numbers = '0'; numbers <= '9'; numbers++)
	{
		_putchar(numbers);
	}
	_putchar('\n');
}

