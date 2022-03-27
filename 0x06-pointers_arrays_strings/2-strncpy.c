#include "main.h"
/**
 * _strncpy - entry point
 * @dest: takes in a pointer which is char type
 *
 * @src: takes in a pointer which is char type
 * @n: takes in an integer value
 * Return: dest pointer from the resulting function
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for(i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}	
