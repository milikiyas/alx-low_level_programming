#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	FILE *b;
	fp = fopen ("file.txt", "w+");
	fprintf(b, "%s %s %s %s %s %s %p %p %s %s %p %d %p %d %p %d ", "that", "piece", "of", "art", "is", "useful", """, "-", "Dora", "Korpar", ","
		     	"2015", "-", "10", "-", "19");
		fclose(b);
		return (1);
}
