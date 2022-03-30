#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 *
 * @s: takes in pointer of string
 * @b: takes in character type value
 * @n: size of bytes
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{

		*(s + i) = b;
		i += 1;
	}
	return (s);
}
