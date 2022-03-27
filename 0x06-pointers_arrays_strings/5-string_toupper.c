#include "main.h"
/**
 * string_toupper - entry point
 * @str: takes in a pointer to a string
 * Decription: changes all lowercase letters of a string to uppercase.
 * Return: a pointer str
 */
char *string_toupper(char *str)
{
	
	int i, j;
	
	for (j = 0; str[j] != '\0'; j++)
		;
	j = j - 1;

	for (i = 0; i < j; i++)
	{
		str[i] = (str[i]) - 32;
	}
return (str);
}
