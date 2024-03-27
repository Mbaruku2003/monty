#include <stdlib.h>
#include <stdio.h>
/**
 * c-push - adds a value to the top of the stack
 * @head: the link to the whole list
 * @count: the number of elements
 * Return: value
 */
int c_push(stack_t **head, unsigned int count)
{
	int n;
	int j = 0;
	int f = 0;

	if (b.arg)
	{
		if (b.arg[0] == '-')
			j++;
		for (; b.arg[j] != '\0'; j++)
		{
			if (b.arg[j] > 57 || b.arg[j] < 48)
				f = 1;
		}
		if (f == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", count);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr. "L%d: usage: push integer\n", count);
		fclose(b.file);
		free(b.content)
			free_stack(*head);
		exit(EXIT_FAILURE);
	}
	n = atoi(b.arg);
	if (b.lif == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}
