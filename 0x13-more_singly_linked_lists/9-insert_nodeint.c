#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a node at a given index
  * @head: pointer to a pointer to first node
  * @idx: the given index
  * @n: vlue to insert at given index
  * Return: address of new node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *temp = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		while (count < idx - 1)
		{
			if (temp == NULL)
			{
				return (NULL);
			}
			temp = temp->next;
			count++;
		}
		new_node->next = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
