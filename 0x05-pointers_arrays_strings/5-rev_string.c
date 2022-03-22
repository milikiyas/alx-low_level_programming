#include "main.h"
/**
 * rev_string - entry point
 * @s: takes string value of type charcter
 * Description: reverse a string
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	i = 0;

	char  **k;

	k = &s;

	while (s[i] != '\0')
	{
		i++;
	}
	j = i;
	while (s[i - 1] != '\0')
	{
		i--;
	}
	*k = s;
}
