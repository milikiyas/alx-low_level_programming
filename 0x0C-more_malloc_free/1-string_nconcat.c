#include "main.h"
#include<stdio.h>
/**
 * string_nconcat - entry point 
 * @s1: string to be concatinated 
 * @s2: string to concatinated on s1
 * Return: pointer to newly allocated memory otherwise null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int k, i, j;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	for (j = 0; s2[j] != '\0'; j++)
		;
	for (i = 0; s1[i] != '\0'; i++)
		;
	ptr = malloc(i + n + 1);
	for (k = 0; k < i; k++)
		ptr[k] = s1[k];
	if (n <= j)
	{
		for(i = 0; i <= n; i++)
		{
			ptr[k] = s2[i];
			k++;
		}
		ptr[k] = '\0';
		return (ptr);
	}
	else if (n > j)
	{
		for (i = 0; i < j; i++)
		{
			ptr[k] = s2[i];
			k++;
		}
		ptr[k] = '\0';
		return (ptr);
	}
	else
		return (NULL);
}
