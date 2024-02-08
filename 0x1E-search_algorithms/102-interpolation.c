#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of
 * integers using the Interpolation search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t cur_pos, low_down, up_high;
	double fig;

	if (array == NULL)
		return (-1);

	low_down = 0;
	up_high = size - 1;

	while (size)
	{
		fig = (double)(up_high - low_down) / (array[up_high] - array[low_down]) * (value - array[low_down]);
		cur_pos = (size_t)(low_down + fig);
		printf("Value checked array[%d]", (int)cur_pos);

		if (cur_pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[cur_pos]);
		}

		if (array[cur_pos] == value)
			return ((int)cur_pos);

		if (array[cur_pos] < value)
			low_down = cur_pos + 1;
		else
			up_high = cur_pos - 1;

		if (low_down == up_high)
			break;
	}

	return (-1);
}
