#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds new nodes end of linked list
 * @head: double pointer
 * @str: string to put in new node
 *
 * Return: address of element or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nuut;
	list_t *perm = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	nuut = malloc(sizeof(list_t));
	if (!nuut)
		return (NULL);

	nuut->str = strdup(str);
	nuut->len = len;
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
