#include "main.h"
/**
 * _strcpy - entry point
 * @dest: takes in character type value
 * @src: takes in character type value
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{

	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		;
	}

	for (; i >= 0; i--)
	{
		dest[i] = src[i];
	}

	return (dest);
}
