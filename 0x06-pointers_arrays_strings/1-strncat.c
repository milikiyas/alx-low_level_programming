#include "main.h"
/**
 * _strncat - entry point
 * @dest: takes in character value
 * @src: takes in caharacter value
 * @n: takes in integer
 * Return: dest on success
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int k;
	int f;

	for (i = 0; src[i] != '\0'; i++)
		;
	for (k = 0; dest[k] != '\0'; k++)
		;
	if (n > 0)
	{
	for (f = 0; f < n; f++)
	{

		dest[k + f] = src[f];

	}
	}
	else 
	{
		if (n == 0)
		dest[k] = dest[k];
		
	}

	
	return (dest);
}
