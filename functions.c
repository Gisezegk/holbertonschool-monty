#include "monty.h"

/**
* pallStack - print all the values on the stack
* starting from the top of the stack
* @stack: pointer to top the stack
* @line_number: number of the line
*/

void pallStack(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	tmp = *stack;
	(void)line_number;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;

	}
}

/**
*pushStack - pushes an element to the stack
*@line_number: number of the line
*@stack: pointer to top the stack
*/

void pushStack(stack_t **stack, unsigned int line_number)
{
	stack_t *nodo = NULL;
	int n, i;
	char *j = strtok(NULL, " \t\n");

	if (j == NULL)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	for (i = 0; j[i] != '\0'; i++)
	{
		if (!isdigit(j[i]) && j[i] != '-')
		{
			fprintf(stderr, "L%u: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
	}
	n = atoi(j);
	nodo = malloc(sizeof(stack_t));
	if (nodo == NULL)
	{
		freestack(nodo);
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	nodo->n = n;
	nodo->prev = NULL;
	if (!*stack)
			nodo->next = NULL;
	else
	{
		nodo->next = *stack;
		(*stack)->prev = nodo;
	}
	*stack = nodo;
}

/**
* pintStack - print the value top of the stack
*@stack: pointer to top the stack
*@line_number: number of the line
*/

void pintStack(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}

/**
*popStack - remove the top element of the stack
*@stack: pointer to top the stack
*@line_number: number of the line
*/

void popStack(stack_t **stack, unsigned int line_number)
{
	stack_t *j;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	j = *stack;
	*stack = (*stack)->next;
	free(j);
}

/**
*nopStack - doesn´t do anything
*@stack: pointer to top the stack
*@line_number: number of the line
*/

void nopStack(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}
