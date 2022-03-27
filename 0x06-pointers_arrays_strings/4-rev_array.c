#include "main.h"
/**
 * reverse_array - entry point
 * @a: takes in integer pointer
 * @n: number of elements of an array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	char ch;

	for (i = 0; i < (n / 2); i++)
	{
		ch = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = ch;
	}



}
