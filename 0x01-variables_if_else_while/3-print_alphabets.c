#include<stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 ((success))
 *
 */
int main (void)
{
	char ch = 'a';
	char CH = 'A';
	while(CH <= 'Z')
	{
		
		while(ch <='z')
		{	
		putchar(ch);
		ch++;
		}
		putchar(CH);
		CH++;
		
	}
	putchar('\n');
	return (0);
}

