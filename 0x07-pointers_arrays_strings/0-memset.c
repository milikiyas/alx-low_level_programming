#include "main.h"
/**
 * _memset - entry point
 * @s - takes in character type pointer
 * @b: takes in character type value
 * @n: takes in unsighned integer value 
 * Return: s pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	
	for (i = 0; s[i] != '\0'; i++)
		s[i] = b;
	return (s);
}
