#include "main.h"
/**
 * puts2 - entry point
 * @s: takes a adress of a string type value
 * Description: prints every other character of a string, starting with the first character
 * Return: void
 */
void puts2(char *str)
{
	int i;
	for( i = 0; *(str + i) != '\0'; i += 2)
		_putchar(str[i]);
}

