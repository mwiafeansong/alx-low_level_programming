#include "function_pointers.h"

/**
 * array_iterator - executes function on each element of array
 * @array: the array
 * @size: size of array
 * @action: function to execute
 *
 * Return: None
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
