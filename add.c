#include "monty.h"
/**
 * adds_node - adds a node to the head of the stack
 * @head: the head of the stack
 * @n: the new element
 * Return: void
 */
void adds_node(stack_t **head, int n)
{
	stack_t *newest_node;
	stack_t *alx;

	alx = *head;
	newest_node = malloc(sizeof(stack_t));
	if (newest_node == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (alx)
		alx->prev = newest_node;
	newest_node->n = n;
	newest_node->next = *head;
	newest_node->prev = NULL;
	*head = newest_node;
}
