#include "lists.h"

/**
 * add_nodeint_end - adds node end of linked list
 * @head: pointer
 * @n: data to insert
 *
 * Return: pointer to node or NULL if fail
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nuut;
	listint_t *perm = *head;

	nuut = malloc(sizeof(listint_t));
	if (!nuut)
		return (NULL);

	nuut->n = n;
	nuut->next = NULL;

	if (*head == NULL)
	{
		*head = nuut;
		return (nuut);
	}

	while (perm->next)
		perm = perm->next;

	perm->next = nuut;

	return (nuut);
}
