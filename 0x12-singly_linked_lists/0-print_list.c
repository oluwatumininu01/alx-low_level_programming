#include "lists.h"
#include <stdio.h>

/**
 * print_list - A function for outputting a linked list
 * @h: pointer t  head of list
 * Return: Retrieve the count of nodes in the list as a size_t
 */
size_t print_list(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);

		h = h->next;
		nodes++;
	}
	return (nodes);
}
