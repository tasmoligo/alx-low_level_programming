#include "main.h"

/**
  * _realloc - reallocates a memory block
  * @ptr: pointer to the memory previously allocated
  * @old_size: the size, in bytes, of the allocated space for ptr
  * @new_size: the new size, in bytes of the new memory block
  * Return: a pointer to the newly allocated memory
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *old_ptr = ptr;
	unsigned int index;

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	if (old_ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
	if (new_size > old_size)
	{
		for (index = 0; index < old_size; index++)
		{
			new_ptr[index] = old_ptr[index];
		}
	}
	if (new_size == old_size)
	{
		return (old_ptr);
	}
	if (new_size == 0 && old_ptr != NULL)
	{
		free(old_ptr);
		return (NULL);
	}
	free(old_ptr);
	return (new_ptr);
}
