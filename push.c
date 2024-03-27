#include "monty.h"
/**
 * c_push - pushes to the top of a stack
 * @head: link to the list
 * @count: counts the number of elements
 */
void c_push(stack_t **head, unsigned int count)
{
	int n, jey = 0, f = 0;

	if (busy.arg)
	{
		if (busy.arg[0] == '_')
			jey++;
		for (; busy.arg[jey] != '\0'; jey++)
		{
			if (busy.arg[jey] > 57 || busy.arg[jey] < 48)
				f = 1;
		}
		if (f == 1)
		{
			fprintf(stderr, "L%d: usage: push integer", count);
			fclose(busy.file);
			free(busy.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(busy.file);
		free(busy.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	n = atoi(busy.arg);
	if (busy.linefile == 0)
		adds_node(head, n);
	else
		addqueue(head, n);
}
