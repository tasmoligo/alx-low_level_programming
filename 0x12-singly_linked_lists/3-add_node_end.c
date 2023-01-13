#include "lists.h"

/**
  * *add_node_end - adds a new node at the end of a list_t list.
  * @head: head of linked list
  * @str: the string to add
  * Return: the address of the new element, or NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *node;
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
	newNode->next = NULL;
	node = *head;
	if (node == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (node->next != NULL)
		{
			node = node->next;
		}
		node->next = newNode;
	}
	return (*head);
}
