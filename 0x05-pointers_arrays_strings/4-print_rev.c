#include "main.h"
/**
 * print_rev - entry point
 * @s: takes in a string value
 * Description: prints string in reverse
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (s[i - 1] != '\0')
	{
		_putchar(s[i - 1]);
		i--;
	}
}


