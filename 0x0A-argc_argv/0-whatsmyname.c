#include<stdio.h>
#include "main.h"

/**
 * main - prints program names
 * @argc: the number of arguments
 * @argv: the array of arguments
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv[0]);
	return 0;
}
