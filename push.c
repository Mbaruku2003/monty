#include "monty.h"
/**
 * c_push - pushes to the top of a stack
 * @head: link to the list
 * @count: counts the number of elements
 */
void dpush(stack_t **head, unsigned int count)
{
	int n, jey = 0, f = 0;

	if (b.arg)
	{
		if (b.arg[0] == '_')
			jey++;
		for (; b.arg[jey] != '\0'; jey++)
		{
			if (b.arg[jey] > 57 || b.arg[jey] < 48)
				f = 1;
		}
		if (f == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", count);
			fclose(b.file);
			free(b.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(b.file);
		free(b.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	n = atoi(b.arg);
	if (b.linefile == 0)
		adds_node(head, n);
	else
	{
		addqueue(head, n);
	}
}
