#include "main.h"
/**
 * rev_string - entry point
 * @s: takes string value of type charcter
 * Description: reverse a string
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (s[i - 1] != '\0')
	{
		i--;
	}
}
