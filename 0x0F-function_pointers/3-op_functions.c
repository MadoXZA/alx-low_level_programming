#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns sum if two numbers
 * @a: first num
 * @b: second num
 *
 * Return: Sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - the diff of two numbers
 * @a: first num
 * @b: second num
 *
 * Return: diff of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - the product of two numbers
 * @a: first num
 * @b: second num
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - the division of two numbers
 * @a: first num
 * @b: second num
 *
 * Return: division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of the division of two numbers returned
 * @a: first number
 * @b: second number
 *
 * Return: remainder of the division of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
