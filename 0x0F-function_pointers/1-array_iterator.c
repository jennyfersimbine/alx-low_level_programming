#include "function_pointers.h"

/**
 * array_iterator - exe a function given as a param on each element of an arr
 * @array: array of int
 * @size: size of array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		exit(1);
	} else
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
