#include "monty.h"


void pall (stack_t **stack, unsigned int line_number)
{
    stack_t *tmp = *stack;
    tmp = *stack;
    line_number = line_number;

    while (tmp =! NULL)
    {
        printf("%d\n", tmp->n);
		tmp = tmp->next;

    }
}

/**
*pint_func - print the value top of the stack
*@stack: pointer to top the stack
*@line_number: number of the line
*/

void pint_func(stack_t **stack, unsigned int line_number);
{
    if (stack == NULL || *stack == NULL)
    {
        printf("L%u: can't pint, stack empty\n", line_number);
        exit(EXIT_FAILURE)
    }
    printf("%d\n", (*stack)->n);
}


/**
*pop - remove the top element of the stack
*@stack: pointer to top the stack
*@line_number: number of the line
*/

void pop_func(stack_t **stack, unsigned int line_number);
{
    stack_t *j;
    if(stack == NULL || *stack == NULL)
    {
        printf(L%u: "can't pop an empty stack\n", line_number);
        exit(EXIT_FAILURE);
    }
    j = *stack;
    *stack = (*stack)->next;
}

/**
*nop_func - doesn´t do anything
*@stack: pointer to top the stack
*@line_number: number of the line
*/

void nop_func(stack_t **stack, unsigned int line_number);
{
    (void) stack;
    (void) line_number;
}
