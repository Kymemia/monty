#ifndef _MONTY_
#define _MONTY_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#define MAX_LINE_SIZE 256

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

typedef struct atoz
{
	char *arg;
	char *dits;
	FILE *bagg;
	int crofty;
	stack_t **top;
} atoxz;
extern atoxz doremi;
void element_add(stack_t **top, unsigned int idx);
void add_q(stack_t **top, unsigned int idx);
void addnode(stack_t **top, unsigned int n);
void lib_stack(stack_t **top, unsigned int idx);
void lets_push(stack_t **top, unsigned int idx);
void stack_print(stack_t *stack);
void to_pall(stack_t **top, unsigned int idx);
void to_pint(stack_t **top, unsigned int idx);
void to_pop(stack_t **top, unsigned int idx);
void to_swap(stack_t **top, unsigned int idx);
void to_sub(stack_t **top, unsigned int idx);
int main(int argc, char *argv[]);
int to_execute(char *dits, stack_t **top, const unsigned int idx);
#endif
