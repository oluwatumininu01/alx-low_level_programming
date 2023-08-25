#include "lists.h"

/**
 * list_len - A function to determine the count of nodes in a linked list
 * @h: head of linked list
 * Return: Retrieve the count of nodes in the list as a size_t
 */
size_t list_len(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
