#include "monty.h"
/**
*execute - execute the opcode
*@op: line with instructions
*@stack: pointer to top the stack
*@line_num: number of line
*Return - none
*/
int execute(char *opcode, stack_t **stack, unsigned int line_number)
{
    int i;
    instruction_t ops [] = {
        {"push", pushStack},
        {"pall", pallStack},
        {"pint", pintStack},
        {"pop", popStack},
        {"swap", swapStack},
        {"add", addStack},
        {"nop", nopStack},
        {NULL, NULL}
};

for (i = 0; ops[i].opcode; i++)
{
    if (strcmp(ops[i].opcode, opcode) == 0)
    {
        ops[i].f(stack, line_number);
        return (0);
    }
}
fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
}
