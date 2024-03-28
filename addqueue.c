#include "monty.h"
/**
 * c_queue - prints the last stack element
 * @head: the head of the stack list
 * @count: counts the lines
 * Return: void
 */
void dqueue(stack_t **head, unsigned int count)
{
	(void)head;
	(void)count;
	bit.linefile = 1;
}
/**
 * addqueue(stack_t **head, int n)
 * @n: new value to be added as element
 * @head: the head to the stack list
 * Return: no return
 */
void dqueue(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node, *alx;

	alx = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (!alx)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		alx->next = new_node;
		new_node->prev = alx;
	}
}
