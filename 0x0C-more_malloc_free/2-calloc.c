#include"main.h"
#include<stdlib.h>
/**
 * _calloc - Allocates memory for an array of a certain number
 * of elements each of an inputted byte size.
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 * Otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0;
	void *ptr;
	
	if (nmemb == 0 || size == 0)
		return (NULL);
	for (i = 1; i <= nmemb; i++)
	{
		ptr = malloc(size);
		if (ptr == NULL)
			return (NULL);
		for (j = 0; j < size; j++)
		{
			ptr[j] = 0;
		}
	}
	return (ptr);
}
