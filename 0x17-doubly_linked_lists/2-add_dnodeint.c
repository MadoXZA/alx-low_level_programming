#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add a new node at beginning of linked list
 * @head: double pointer to  beginning of linked list
 * @n: value to add to new node
 *
 * Return: pointer to new node, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nuut;

	if (head == NULL)
		return (NULL);
	nuut = malloc(sizeof(dlistint_t));
	if (nuut == NULL)
		return (NULL);
	nuut->n = n;
	nuut->prev = NULL;
	nuut->next = *head;
	*head = nuut;
	if (nuut->next != NULL)
		(nuut->next)->prev = nuut;
	return (nuut);
}
