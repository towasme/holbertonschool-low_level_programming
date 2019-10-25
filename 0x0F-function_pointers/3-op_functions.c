#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *op_add - function that adds two numbers
 *@a - var int type
 *@b
 *Return: Always
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - func that subtracts
 *@a: var int
 *Return: Always
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *int_index - creates an array
 *@array: pointer
 *@size: function pointer
 *@cmp: function pointer
 *Return: Always
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *int_index - creates an array
 *@array: pointer
 *@size: function pointer
 *@cmp: function pointer
 *Return: Always
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 *int_index - creates an array
 *@array: pointer
 *@size: function pointer
 *@cmp: function pointer
 *Return: Always
 */

int op_mod(int a, int b)
{
	return (a % b);
}
