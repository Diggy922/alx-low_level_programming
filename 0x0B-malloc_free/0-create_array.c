#include "main.h"

/**
* create_array - create an array of chars, and
* initializes it with a specific char.
* @size: size of the array
* @c: character to insert
* Return: NULL if size is zero or it fails,
* pointer to array if everything is normal
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);
	array = malloc(sizeofchar) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
