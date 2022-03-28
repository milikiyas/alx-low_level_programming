#include "main.h"
/**
 * _strspn - entry point
 * @s: takes in character type string
 * @accept: strring to check againts
 * Return: number of bytes of s in accept
 */
unsigned int _strspn(char *s, char *accept)
{


	unsigned int i, j;

	for (i = 0; s[i]; j++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break
	}
	return (i);


