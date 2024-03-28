#include "monty.h"
/**
 * free_stack - frees a doubly linked lists
 * @head: head of a stack
 * Return: void
 */
void free_stack(stack_t *head)
{
	stack_t *alx;

	alx = head;
	while (head)
	{
		alx = head->next;
		free(head);
		head = alx;
	}
}
