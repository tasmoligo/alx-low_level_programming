#include "lists.h"

/**
  * *add_node - adds a new node at the beginning of a list_t list
  * @head: pointer to the string
  * @str: the string to add
  * Return: the address of the new element, or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	size_t i;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	for (i = 0; str[i]; i++)
	{
		;
	}
	newNode->len = i;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
