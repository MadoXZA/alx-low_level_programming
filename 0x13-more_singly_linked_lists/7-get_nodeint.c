#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at acert index
 * @head: first node
 * @index: node to return
 *
 * Return: pointer to node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;
	listint_t *perm = head;

	while (perm && k < index)
	{
		perm = perm->next;
		k++;
	}

	return (perm ? perm : NULL);
}
