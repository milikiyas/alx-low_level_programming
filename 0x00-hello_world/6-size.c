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

	printf("Size of int: %lu Byte(s)\n", sizeof(a));
	printf("Size of char: %lu Byte(s)\n", sizeof(b));
	printf("Size of long int: %lu Byte(s)\n", sizeof(c));
	printf("Size of long-long int %lu Byte(s)\n", sizeof(f));
	printf("Size of float: %lu Byte(s)\n", sizeof(e));

	return (0);
}
