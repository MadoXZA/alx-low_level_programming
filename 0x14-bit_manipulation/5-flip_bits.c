#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, count = 0;
	unsigned long int current;
	unsigned long int exclusive_l = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		current = exclusive_l >> k;
		if (current & 1)
			count++;
	}

	return (count);
}
