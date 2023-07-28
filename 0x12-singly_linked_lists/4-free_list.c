#include "lists.h"

/**
 *  frees a list
 * @head: head of the linked list.
 * Return: nothing to return.
 */

void free_list(list_t *head)
{
	list_t *current_node;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
