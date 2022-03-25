#include "main.h"
/**
 * _strcat - entry point
 * @dest: taks char type variable
 * @src: takes char type variable
 * Description:  concatenates two strings.
 * Return: dest charactr type pointer
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int k;
	int f;

	for (i = 0; src[i] != '\0'; i++)
	{
		;
	}
	for (k = 0; dest[i] != '\0'; k++)
	{
		_putchar(dest[i] + '0');
	}

	for (f = 0; f <= i - 1; f++)
	{
		dest[k] = src[f];
		k++;
		_putchar(dest[k] + '0');
	}
	return (dest);
}
