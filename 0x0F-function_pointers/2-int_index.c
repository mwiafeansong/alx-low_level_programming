#include "function_pointers.h"

/**
 * int _index - searches for an integer
 * @array: array to search
 * size: size of array
 * @cmp: compares values
 *
 * Return: index of first element for which cmp does not return 0,
 * -1 if no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
		return (-1);
	}
}
