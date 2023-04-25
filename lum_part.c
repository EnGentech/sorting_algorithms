#include "sort.h"

/**
* lum_part - split array into two parts considering size
* @array: get the data element of array type
* @size: determine the length of the array
* @low: determine the lowest index of the element
* @high: determine the highest index of the element
* Return: return up value
*/
int lum_part(int *array, size_t size, int low, int high)
{
int up, down, *pivot;

pivot = array + high;
for (up = down = low; down < high; down++)
{
if (array[down] < *pivot)
{
if (up < down)
{
swp(array + down, array + up);
print_array(array, size);
}
up++;
}
}

if (array[up] > *pivot)
{
swp(array + down, pivot);
print_array(array, size);
}
return (up);

/* Coded by EnGentech and Ozonwu Frankelly */
}
