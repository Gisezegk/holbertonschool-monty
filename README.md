# Proyect C - Stacks, Queues - LIFO, FIFO
### The Monty language

- Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.
### Monty byte code files
- Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument:
```
julien@ubuntu:~/monty$ cat -e bytecodes/000.m
push 0$
push 1$
push 2$
  push 3$
                   pall    $
push 4$
    push 5    $
      push    6        $
pall$
julien@ubuntu:~/monty$
```
- Monty byte code files can contain blank lines (empty or made of spaces only, and any additional text after the opcode or its required argument is not taken into account:
```
julien@ubuntu:~/monty$ cat -e bytecodes/001.m
push 0 Push 0 onto the stack$
push 1 Push 1 onto the stack$
$
push 2$
  push 3$
                   pall    $
$
$
                           $
push 4$
$
    push 5    $
      push    6        $
$
pall This is the end of our program. Monty is awesome!$
julien@ubuntu:~/monty$
```
## Compilation
Your code will be compiled this way:
```
$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```
## Files and Functions used in this project

| File | Functions |
|------------------- | --------------|
|monty.h| Header file. Contains prototypes of functions and libraries.|
|execute.c| Contains the execute function. Execute the opcode.|
|functions.c| Contains the opcodes: Pall, Push, Pint, Pop and Nop.|
|more_functions.c| Contains the opcodes: Add, Swap and functions Freestack & Freenode.|
|get_opcode.c| Contains get_op function. Get the opcode of the file readed.|
|monty.c| Contains de monty function.|
|README.md| Current file. Contains information about this project. |

## Opcodes used in this project
| Opcode | Description |
|------------------- | --------------|
|push   | Pushes an element to the stack.|
|pall   | Prints all the values on the stack, starting from the to of the stack.|
|pint   | Prints the value at the top of the stack, followed by a new line.|
|pop    | Removes the top element of the stack.|
|swap   | Swaps the top two elements of the stack.|
|add    | Adds the top two elements of the stack.|
|nop    | Doesn't do anything.|

# Authors
- Joaquin Fernandez [@Joaquinfer7688](https://github.com/Joaquinfer7688)
- Giselle Nieves [@Gisezegk](https://github.com/Gisezegk)








