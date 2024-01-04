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
