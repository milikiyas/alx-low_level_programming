#include "main.h"
/** _isalpha - checks for alphabetic charcter
 * @c: takes in a character
 * Returns: 1 if uppercase and lowercase letter or 0 else
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
