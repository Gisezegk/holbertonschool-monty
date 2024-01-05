#include "monty.h"
/**
*execute - execute the opcode
*@op: line with instructions
*@stack: pointer to top the stack
*@line_num: number of line
*Return - none
*/
void execute (stack_t **stack, unsigned int line_number)
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
        {NULL, NULL},
};

for (i = 0; ops[i].opcode; i++)
if (strcmp(op, ops[i].opcode) == 0)
{
    ops[i].f(stack, line_num);
    return;
}

if (strlen (op) != 0 && op[0] != '#')
{
    printf (L%u: unknown instruction %s\n, line_num, op);
    exit (EXIT_FAILURE);
}

}
