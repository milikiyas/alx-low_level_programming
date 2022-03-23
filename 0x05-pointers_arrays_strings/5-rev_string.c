#include "main.h"
/**
 * rev_string - entry point
 * @s: takes string value of type charcter
 * Description: reverse a string
 * Return: void
 */
void rev_string(char *s)
{
	int i, k;

	i = 0;

	for (; s[i] != '\0'; i++)
	{
	;
	}
	for (k = 0; s[i] != '\0'; k++, i--)
	{
	*(s + k) = (*s + (i - 1));
	}
}
