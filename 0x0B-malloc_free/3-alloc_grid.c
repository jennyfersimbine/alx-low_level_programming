#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: of array
 * @height: of array
 * Return: pointer to 2d array
 */

int **alloc_grid(int width, int height)
{
	int **pint;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	pint = malloc(sizeof(int *) * height);
	if (pint == NULL)
	{
		free(pint);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		pint[i] = malloc(sizeof(int) * width);
		if (pint[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(pint[i]);
			}
			free(pint);
			return (NULL);
		}
	}
	return (pint);
}
