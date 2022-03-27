#include  "main.h"
/**
 * _strcmp - entry point
 * @s1: character type pointer
 * @s2: character type pointer
 * Return: 0 always on succcess
 */
int _strcmp(char *s1, char *s2)
{
	int i, k, h, a;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (k = 0; s2[k] != '\0'; k++)
		;
		i = i - 1;
		k = k - 1;


	if (i >= k)
	{
		for (h = 0; h <= i; h++)
		{
			if (s1[h] != s2[h])
			{
			a = s1[h] - s2[h];
			return (a);

			}

		}
	}

	if (i < k)
	{
		for (h = 0; h <= k; h++)
		{
			if (s1[h] != s2[h])
			{
				a = s1[h] - s2[h];
				return (a);

			}
		}
	}
	return (0);
}
