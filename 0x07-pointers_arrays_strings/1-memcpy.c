#include "main.h"
/**
 * _memcpy - entry point
 *
 * @dest: takes in character type pointer
 * @src: takes character type pointer
 * @n: size of an array ineger type
 *
 * Return: dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, p;

	if (dest == NULL)
		return NULL;
	if (dest)
	{
	for (i = 0; i < n; i++)
		dest[i] = src[i];
	}
	if (dest + p)
	{
		for (i = 0; i < n; i++)
		dest[i + p] = src[i];
	}
	return (dest);
}
	
