#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - select the correct function to perform asked by the user
 * @s: the operator pass as an argument
 *
 * Return: pointer to the corresponding function given as a parameter
 */

int(*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int k = 0;

	while (ops[k].op != NULL && *(ops[k].op) != *s)
		k++;
	
	return (ops[k].f);
}
