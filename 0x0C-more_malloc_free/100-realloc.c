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
	unsigned int i;

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		new_ptr = malloc(new_size);
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			new_ptr[i] = old_ptr[i];
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
	return (new_ptr);
}
