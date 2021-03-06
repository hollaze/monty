#ifndef MONTY_H
#define MONTY_H

#define Error_input 100
#define Error_file 101
#define Error_instruction 102
#define Error_malloc 103
#define Error_push_integer 104
#define Error_stack_empty 105
#define Error_pop 106
#define Error_swap 107
#define Error_add 108
#define DELIMITEUR " \n\t\a"
#define Error2_sub 200


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

extern char *op_value;


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
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
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/** functions **/
void _pall(stack_t **stack, unsigned line_number __attribute__((unused)));
void _push(stack_t **stack, unsigned line_number __attribute__((unused)));
void _pint(stack_t **stack, unsigned line_number __attribute__((unused)));
void _pop(stack_t **stack, unsigned int line_number __attribute__((unused)));
void _swap(stack_t **stack, unsigned int line_number __attribute__((unused)));
void _nop(stack_t **stack, unsigned int line_number __attribute__((unused)));

/** Ancillary functions **/
int _isdigit(char *c);
int delete_nodeint_at_index(stack_t **head, unsigned int index);
int line_len(stack_t **stack);

/** Error.c **/
void _Error(int error_num, char *op_code, unsigned int line_number);
void _Error2(int error_num, char *op_code, unsigned int line_number);

/** get_opcode.c **/
int get_opcode(char *op_code, stack_t **stack, unsigned int line_number);

/** free **/
void free_stack(stack_t **stack);

/** operators functions **/
void _add(stack_t **stack, unsigned int line_number);
void _sub(stack_t **stack, unsigned int line_number __attribute__((unused)));

#endif /* MONTY_H */
