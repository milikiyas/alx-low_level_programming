#include "main.h"
/**
 * _puts_recursion - main entry
 * @s: takes in pointer to string
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
		_putchar('\n');
}
