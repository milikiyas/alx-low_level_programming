#include "main.h"
/**
 * _puts_recursion - main entry
 * @s: takes in pointer to string
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i;

	i++;
	if (s[i] != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
		_putchar('\n');
}
