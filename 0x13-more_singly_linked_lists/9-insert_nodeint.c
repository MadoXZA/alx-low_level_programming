#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given posi
 * @head: pointer to first node
 * @idx: index where node is added
 * @n: data to insert
 *
 * Return: pointer to node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *nuut;
	listint_t *perm = *head;

	nuut = malloc(sizeof(listint_t));
	if (!nuut || !head)
		return (NULL);

	nuut->n = n;
	nuut->next = NULL;

	if (idx == 0)
	{
		nuut->next = *head;
		*head = nuut;
		return (nuut);
	}

	for (k = 0; perm && k < idx; k++)
	{
		if (k == idx - 1)
		{
			nuut->next = perm->next;
			perm->next = nuut;
			return (nuut);
		}

		else
			perm = perm->next;
	}

	return (NULL);
}
