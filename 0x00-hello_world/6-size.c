#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int a;
	char b;
	long int c;
	long long int f;
	float e;

	printf("Size of int: %ld Byte\n", sizeof(a));
	printf("Size of char: %ld Byte\n", sizeof(b));
	printf("Size of long int: %ld Byte\n", sizeof(c));
	printf("Size of long-long int %ld Byte\n", sizeof(f));
	printf("Size of float: %ld Byte\n", sizeof(e));
	return (0);
}
