#ifndef __MONTY_H__
#define __MONTY_H__

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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
 * struct instruction_s - opcoode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, size_t line_number);
} instruction_t;

/**
 * struct vars_s - holds all variables to be passed
 * @IFO: flag to determine stack(0) or queue(1)
 * @fname: string holding file name
 * @fp: file pointer to open file
 * @tokened: tokenized string of our input from file
 * @head: head of our stack
 * @line_number: line number that was just read from file
 * @buf: buffer for the line in the file
 *
 * Description: A struct that we make global to pass variables
 *  for stack, queues, LIFO, FIFO holberton project
 */
typedef struct vars_s
{
	int IFO;
	char *fname;
	FILE *fp;
	char **tokened;
	char *buf;
	struct stack_s *head;
	size_t line_number;
} vars_t;

extern vars_t *element;

stack_t *add_stack_init(void);
stack_t *add_stack_end(void);
void gettoken(char *buf);
void pall(stack_t **stack, size_t line_number);
void push(stack_t **stack, size_t line_number);
void pint(stack_t **stack, size_t line_number);
void pop(stack_t **stack, size_t line_number);
void nop(stack_t **stack, size_t line_number);
void swap(stack_t **stack, size_t line_number);
void add(stack_t **stack, size_t line_number);
void divide(stack_t **stack, size_t line_number);
void mul(stack_t **stack, size_t line_number);
void sub(stack_t **stack, size_t line_number);
void mod(stack_t **stack, size_t line_number);
void opcode_search(void);
void pchar(stack_t **stack, size_t line_number);
void pstr(stack_t **stack, size_t line_number);
void rotl(stack_t **stack, size_t line_number);
void rotr(stack_t **stack, size_t line_number);
void free_buffer(void);
void free_token(void);
void free_list(stack_t *head);
void exit_function(size_t err_num);
void lifo(stack_t **stack, size_t line_number);
void fifo(stack_t **stack, size_t line_number);

#endif
