#include<stdio.h>
#include<stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: value of the arguments
 *
 * Return: Always 0 (success)
 */

int main( int argc, char *argv)
{
	int b = argc -1;
	int i;
	int c;
	int n;

	r = 0;
	if ( b == 0)
	{
		printf("0\n");
		return (0);
	}

	for (c = 1; c <- b; c++)
	{
		n = _atoi(argv[c]);
		if (isdigit(n))
		{
			printf("Error\n");
			return (0);
		}
		i += n;
	}
	printf("%d\n", i);
	return (0);
}
