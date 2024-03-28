#include "monty.h"
/**
 * d_pop: pops the last element
 * @stack: the pointer to the pointer of the stack
 * @line_number: line number of an operation
 * Return: void
 */
void d_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *remove = *stack;

	if (bit.stack_len == 0)
	{
		dprintf(STDOUT_FILENO,
				"L%u: empty stack\n",
				line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->prev = (*stack)->prev;
	(*STACK)->prev->next = (*stack)->next;
	if (bit.stack_length != 1)
		*stack = (*stack)->next;
	else
		*stack = NULL;
	free(d_pop);
	bit.stack_length--;
}
