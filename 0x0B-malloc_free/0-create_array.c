#include "main.h"
#include <stdlib.h>
/**
 * create_array - entry point
 * @size: takes positive integer for size of array
 * @c: character for the array
 * Return: pointer if size is not 0  otherwise NULL
 */
char *create_array(unsigned int size, char c)

{
	char *ptr;
	unsigned int i;

	ptr = (char *)malloc(size * sizeof(char));
	if (size == 0)
	{

		return (NULL);
	}
	else
	{
		for (i = 0; i <= size; i++)
		{
		*(ptr + i) = c;
		
		if (i == size
				free(ptr);
		}
		

	return (ptr);
	}

}
