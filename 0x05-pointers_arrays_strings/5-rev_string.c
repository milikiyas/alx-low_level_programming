#include "main.h"
/**
 * rev_string - entry point
 * @s: takes string value of type charcter
 * Description: reverse a string
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	j = i;
	while (s[j - 1] != '\0')
	{
		j--;
	}
}
