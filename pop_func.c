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
