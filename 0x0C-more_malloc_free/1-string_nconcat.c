#include "main.h"
#include<stdlib.h>
/**
 *string_nconcat - Concatenates two strings using at
 *         most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 * 
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int k, i, j;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	for (j = 0; s2[j] != '\0'; j++)
		;

	for (i = 0; s1[i] != '\0'; i++)
		;

	ptr = malloc(i + n + 1 * sizeof(char));
	
	if (ptr == NULL)
		return (NULL);
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
