#include "main.h"
/**
 * _strlen - entry point
 * @s: takes character type value
 * Return:  always 0
 *
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	_putchar(i + '0');
	return(0);
}
