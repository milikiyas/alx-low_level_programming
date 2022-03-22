#include "main.h"
#include<stdio.h>
/**
 * print_array - entyr point
 * @a: takes adress of a variable
 * @n: takes an integer value
 * Description: prints out values of an array
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; *(a + i); i++)
	{
	if (i <= (n - 1))
	       {
		if (i == n - 1)
		{
			printf("%d", *(a+i));
		}
		else
		{
		printf("%d, "i *(a + i));
		}
		else if (i > (n - 1))
		{
			break;
		}
	       }
	}
	_putchar('\n');
}


