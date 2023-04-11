#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim, array
 */

int **alloc_grid(int width, int height)
{
	int **nee;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	nee = malloc(sizeof(int *) * height);

	if (nee == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		nee[x] = malloc(sizeof(int) * width);

		if (nee[x] == NULL)
		{
			for (; x >= 0; x--)
				free(nee[x]);
			free(nee);

			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)

			nee[x][y] = 0;
	}

	return (nee);
}
