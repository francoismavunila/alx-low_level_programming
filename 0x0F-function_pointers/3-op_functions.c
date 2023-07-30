#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function that performs addition
 * @a: first operand
 * @b: second operand
 * Return: result of addition
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - this function perfoorms subtraction
 * @a: the first operand
 * @b: the second operand
 * Return: res of subtraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - this function performs multiplication
 * @a: this is an operand
 * @b: this is an operand
 * Return:  the results of multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - this function performs diision
 * @a: this is an operand
 * @b: this is an operand
 * Return: res of div
 */

int op_div(int a, int b)
{
	if (b)
	{
		return (a / b);
	}
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - checks for a remainder
 * @a: this is an operand
 * @b: this is an operand
 * Return: performs d=som o
 */

int op_mod(int a, int b)
{
	if (b)
	{
		return (a % b);
	}
	printf("Error\n");
	exit(100);
}


