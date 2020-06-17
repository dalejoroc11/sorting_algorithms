#include "sort.h"
/**
 * bubble_sort - sorts array in ascending order
 * @array : array whit pointer
 * @size : size int
 * Return: no
 */
void bubble_sort(int *array, size_t size)
{
int temp = 0;
size_t i, j;
if (array == NULL || size == 0)
return;
for (i = 0; i < size; i++)
{
for (j = 0; j < size - 1 - i; j++)
{
if (array[j] > array[j + 1])
{
temp = array[j + 1];
array[j + 1] = array[j];
array[j] = temp;
print_array(array, size);
}
}
}
}
