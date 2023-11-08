#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of int
 * @size: size of array
 * @cmp: function pointer to compare, returns 0 if false
 * Return: index of matching nr, elseif false -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		res = (*cmp)(array[i]);
		if (res != 0)
		{
			return (i);
		}
	}
	return (-1);
}
