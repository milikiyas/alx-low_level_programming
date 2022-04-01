#include "main.h"
#include<stdio.h>
/**
 * main - entry point
 * @argv: array of arguments
 * @argc: number of argumets
 * Return: 0 for two argumnts otherwise 1
 */
int main(argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1];
		b = atoi(argv[2];
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
