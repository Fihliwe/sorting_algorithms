#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array
 * @size: array size
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t position;
	size_t temp = 0;

	if (size < 2)
		return;

	for (i = 0; i < size; i++)
		for(position = 0; position < size; position++)
		{
			if(array[position] > array[position + 1] && array[position + 1])
			{
				temp = array[position];
				array[position] = array[position + 1];
				array[position + 1] = temp;
				print_array(array, size);
			}
		}
}	
