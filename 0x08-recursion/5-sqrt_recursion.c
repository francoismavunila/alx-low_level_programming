#include "main.h"
/**
 * pointers and arrays
 * 
 */
int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}

int sqr(int x, int y)
{

	if (y * y == x)
		return (y);
	else if (y * y < x)
		return  (square(x, y + 1));
	else
		return (-1);

}
