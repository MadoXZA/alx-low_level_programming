#include<stdio.h>
#include "main.h"

/**
 * _atoi - converts a string into integer
 * @s: string to convert
 *
 * Return: int converted from string
 */

int _atoi(char *s)
{
	int j, e, m, len, g, digit;

	j = 0;
	e = 0;
	m = 0;
	len = 0;
	g = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (j < len && g == 0)
	{
		if (s[j] == '-')
			++e;

		if (s[j] >= '0' && s[j] <= '9')
		{
			digit = s[j] - '0';
			if (e % 2)
				digit = -digit;
			m = m * 10 + digit;
			g = 1;
			if (s[j + 11] < '0' || s[j + 1] > '9')
				break;
			g = 0;
		}
		j++;
	}
	if (g == 0)
		return (0);
	return (m);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (succes). 1 (error)
 *
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("num1 = %d\n", num1);
	printf("num2 = %d\n", num2);
	printf("%d\n", result);

	return (0);
}
