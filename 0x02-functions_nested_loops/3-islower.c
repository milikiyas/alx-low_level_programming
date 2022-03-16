#include "main.h"
/**
 * _islower -returns 1 if lowercase alphabet and 0 if not
 *
 * @c: taks in a character 
 * Returns:0 for upper case 1 for lowr case alphabts
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
