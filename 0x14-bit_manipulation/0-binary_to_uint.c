#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: the binary number
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int deci_valu = 0;

	if (!b)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		deci_valu = 2 * deci_valu + (b[k] - '0');
	}

	return (deci_valu);
}
