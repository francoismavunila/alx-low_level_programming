#include "3-calc.h"
/**
 * comment comment
 */

int op_add(int a, int b)
{
	return (a + b);
}



int op_sub(int a, int b)
{
	return (a - b);
}



int op_mul(int a, int b)
{
	return (a * b);
}


int op_div(int a, int b)
{
	if (b!=0)
	{
		return (a / b);
	}
	printf("Error\n");
	exit(100);
}



int op_mod(int a, int b)
{
	if (b!=0)
	{
		return (a % b);
	}
	printf("Error\n");
	exit(100);
}


