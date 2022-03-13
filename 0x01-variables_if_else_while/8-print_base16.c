#include<stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 ((success)
 */

int main(void)

{
	char l_s, a;

	l_s = 'a';
	a = '0';

		while (a <= '9')
		{
			putchar(a);
			a++;
		}

		while (l_s <= 'f')

		{
			putchar(l_s);
			l_s++;
		}
		putchar('\n');
		return (0);

}
