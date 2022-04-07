#include "main.h"
#include<stdlib.h>
/**
 * malloc_checked - entry point
 * @b: positive integer including 0
 * Return: void pointer otherwise exit code with status value 98
 */
void *malloc_checked(unsigned int b)
{
	void *var;

	var = malloc(b);

	if (var == NULL)
		exit(98);
	return (var);
}
