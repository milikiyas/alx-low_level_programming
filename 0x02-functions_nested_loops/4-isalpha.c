#include "main.h"
/** _isalpha - checks for alphabetic character
 * @c: takes in a character
 * Return: 1 if uppercase and lowercase letter or 0 else
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c  <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
