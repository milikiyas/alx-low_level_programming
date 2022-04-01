#include "main.h"
#include<stdio.h>
/**
 * main - entry point
 * @argv: array of string argument
 * @argc: size of arguments in total;
 * Return: 0 always successful
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
