#include "monty.h"
/**
*execve - execute the opcode
*@op: line with instructions
*@stack: pointer to top the stack
*@line_num: number of a line
*Return - none
*/
void execve (stack_t **stack, unsigned int line_number);
{
    int i;
    instruction_t ops [] = {
        {"push", pushstack},
        {"pall", pallfunc},
        {"pint", pintfunc},
        {"pop", popfunc},
        {"swap", swapfunc},
        {"add", addfunc},
        {"nop", nopfunc},
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