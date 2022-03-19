
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main block
 * Description: print alphabets using putchar
 * Return: 0
 */
int main(void)
{
	char hello[] = "abcdefghijklmnopqrstuvwxyz\n";
	char *s;

	s = hello;

	while (*s != '\0')
	{
		char out = (char)*s;

		if (out == 'q' || out == 'e')
		{
			s++;
			continue;
		}
		putchar(*s);
		s++;
	}
	return (0);
}
