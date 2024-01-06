#include "monty.h"

/**
* main - main funtion for monty
* byte code interpreter.
* @argc: arguments count.
* @argv: argument vector.
* Return: 0 on sucess, 1 otherwise.
*/

int main(int argc, char *argv[])
{
    FILE *file;
    char *charged_line = NULL, *opcode = NULL;
    size_t len = 0;
    int read = 0, result = 0;
    unsigned int line_number = 0;
    stack_t *stack = NULL;

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }
    file = fopen(argv[1], "r");
    if (file == NULL)
    {
        fprintf(stderr,"Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    while ((read = getline(&charged_line, &len, file)) != -1)
    {
        line_number++;
        opcode = get_op(charged_line, line_number);
        if (opcode == NULL)
                continue;
        result = execute(stack_t **stack, unsigned int line_number, char *op);
        if (result == -1)
                exit(EXIT_FAILURE);
    }
    free(charged_line);
    fclose(file);
    freestack(stack);
    exit(EXIT_FAILURE);
}
