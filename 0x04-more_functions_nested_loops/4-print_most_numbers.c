#include "main.h"

/**
 *print_most_numbers - entry point
 *
 * Description: prints the numbers with _putchar
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num == '2' || num == '4')
			;
		else
			_putchar(num);
	}
	_putchar('\n');
}
