#include "main.h"
/**
* mul - multiplies two integer
* @a: takes in an integer
* @b: takes in an integer
*
* Return: void
*/
int mul(int a, int b)
{
	int product_;
	if ((a <= 0 || b <= 0) && !(a <= 0 && b <= 0))
	{
	product_ = -(a * b);
	}
	else if (a >= 0 && b >= 0)
	{
		product_ = a * b;

		return(0);`
}
