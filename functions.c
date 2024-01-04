#include "monty.h"

/**
* PallStack - print all the values on the stack 
* starting from the top of the stack
* @stack: pointer to top the stack
* @line_number: number of the line
*/

void PallStack (stack_t **stack, unsigned int line_number)
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
* Pint_Stack - print the value top of the stack
*@stack: pointer to top the stack
*@line_number: number of the line
*/

void PintStack(stack_t **stack, unsigned int line_number);
{
    if (stack == NULL || *stack == NULL)
    {
        printf("L%u: can't pint, stack empty\n", line_number);
        exit(EXIT_FAILURE)
    }
    printf("%d\n", (*stack)->n);
}


/**
*PopStack - remove the top element of the stack
*@stack: pointer to top the stack
*@line_number: number of the line
*/

void PopStack(stack_t **stack, unsigned int line_number);
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
*NopStack - doesn´t do anything
*@stack: pointer to top the stack
*@line_number: number of the line
*/

void NopStack(stack_t **stack, unsigned int line_number);
{
    (void) stack;
    (void) line_number;
}
