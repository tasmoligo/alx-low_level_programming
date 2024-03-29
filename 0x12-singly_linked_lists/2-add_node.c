#include "lists.h"

/**
  * add_node - adds a node at the beginning of a list
  * @head: a pointer to the first node
  * @str: the value of the added node
  * Return: pointer to the added node
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
