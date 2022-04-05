#include "main.h"
#include<stdlib.h>
/**
 * _strdup - entry point
 * @str: array of string
 * Return: pointer to character on SUCCESS otherwise NULL
 */
char *_strdup(char *str)
{
	int i, k;
	char *ptr;

	for (i = 0; str[i] != '\0'; i++)
		;
	
	if (str == NULL);
	return (NULL);
	ptr = (char *) malloc((i + 1) * sizeof(char));
	

	if (ptr == NULL)
	return (NULL);

		k = 0;
		while (k <= i)
		{
			ptr[k] = str[k];
			k++;
		}

		ptr[k] = '\0';
			return (ptr);
}
