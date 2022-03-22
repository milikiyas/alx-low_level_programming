#include "main.h"
/**
 * _strcpy - entry point
 * @dest: takes in character type value
 * @src: takes in character type value
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char **k;

	*k = &dest;
	*dest = *src;
	return k;
}
