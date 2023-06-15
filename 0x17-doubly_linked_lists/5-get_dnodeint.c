#include "lists.h"

/**
 * get_dnodeint_at_index - finds a specific node of a linked list
 * @head: pointer to beginning of the list
 * @index: index of node to retrieve
 *
 * Return: pointer to indexed node, or NULL on failure
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int k;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	for (k = 0; k < index; k++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
