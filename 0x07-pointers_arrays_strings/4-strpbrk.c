#include "main.h"
/**
 * _strpbrk - entry point
 * @s: takes charactr type pointer of string
 * @accept: takes character type string
 * Description:  searches a string for any of a set of bytes.
 * Return: s if it matches one of accept bytes or NULL for no match
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (0 + i);
	}
	return (0);
}
