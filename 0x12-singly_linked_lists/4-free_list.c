#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Releases a linked list's memory.
 * @head: list_t list in preparation for freeing.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
