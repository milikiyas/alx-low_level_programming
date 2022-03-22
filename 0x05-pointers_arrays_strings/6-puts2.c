#include "main.h"
/**
 * puts2 - entry point
 * @str: takes a adress of a string type value
 * Description: prints every other character of a string
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i += 2)
	{
	if (i >336)
		{
		break;
		}
	_putchar(str[i]);

	}

	_putchar('\n');
}

