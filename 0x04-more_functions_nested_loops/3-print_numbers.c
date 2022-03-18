#include "main"

/**
 * print_numbers - entry point
 *
 * Description: prints the number with _putchar
 *
 * Return: void
 */

void print_numbers(void)
{
	for (int i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

