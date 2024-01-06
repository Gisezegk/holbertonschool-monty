#include "monty.h"

/**
 * freestack - function to free an entire stack
 * @head: pointer to the first stack
*/

void freestack(stack_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}


/**
 * freeNode - function to free a node
 * @node: the node to be freed.
*/

void freeNode(stack_t *node)
{
	free(node);
}


/**
 * swapStack - function to swap the two top stacks.
 * @stack: the estructure.
 * @line_number: Carries the information of the line number
*/

void swapStack(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	int n = head->n;

	head->n = head->next->n;
	head->next->n = n;
}

/**
* addStack - adds the top two elements of the stack
*@line_number: line of the number
*@stack: pointer to top the stack
*/

void addStack(stack_t **stack, unsigned int line_number)
{
	stack_t *f;
	int a;

	if (!stack || !(*stack) || !(*stack)->next)
	{
		printf("L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	f = *stack;
	a = j->n + j->next->n;
	f->next->n = a;

	*stack = j->next;
	free(j);
}
