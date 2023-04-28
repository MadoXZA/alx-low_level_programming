#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns elements in a linked list
 * @h: pointer
 *
 * Return: elements in h
 */

size_t list_len(const list_t *h)
{
	size_t l = 0;

	while (h)
	{
		l++;
		h = h->next;
	}
	return (l);
}
