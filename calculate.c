#include "monty.h"

/**
 * add - adds the top two elements of the stack
 * @stack: ptr to the top of the stack
 * @line_number: the line number of the command being execute
 * Return: void
 */
void add(stack_t **stack, size_t line_number)
{
	(void) stack;
	(void) line_number;

	if (element->head != NULL && element->head->next != NULL)
	{
		element->head->next->n = element->head->n + element->head->next->n;
		pop(NULL, 0);
	}
	else
	{
		exit_function(8);
	}
}

/**
 * sub - subtracts the top element of the stack from the second
 * top element of the stack
 * @stack: ptr to the top of the stack
 * @line_number: the line number of the command being execute
 * Return: void
 */
void sub(stack_t **stack, size_t line_number)
{
	(void) stack;
	(void) line_number;

	if (element->head != NULL && element->head->next != NULL)
	{
		element->head->next->n = element->head->next->n - element->head->n;
		pop(NULL, 0);
	}
	else
	{
		exit_function(9);
	}
}

/**
 * divide - divides the second top element of the stack by the
 * top element of the stack
 * @stack: ptr to the top of the stack
 * @line_number: the line number of the command being execute
 * Return: void
 */
void divide(stack_t **stack, size_t line_number)
{
	(void) stack;
	(void) line_number;
	if (element->head != NULL && element->head->next != NULL)
	{
		if (element->head->n == 0)
			exit_function(13);
		element->head->next->n = element->head->next->n / element->head->n;
		pop(NULL, 0);
	}
	else
	{
		exit_function(10);
	}
}

/**
 * mul - multiplies the second top element of the stack
 * with the top element of the stack
 * @stack: ptr to the top of the stack
 * @line_number: the line number of the command being execute
 * Return: void
 */
void mul(stack_t **stack, size_t line_number)
{
	(void) stack;
	(void) line_number;

	if (element->head != NULL && element->head->next != NULL)
	{
		element->head->next->n = element->head->n * element->head->next->n;
		pop(NULL, 0);
	}
	else
	{
		exit_function(11);
	}
}

/**
 * mod - computes the rest of the division of the second top element
 * of the stack by the top element of the stack
 * @stack: ptr to the top of the stack
 * @line_number: the line number of the command being execute
 * Return: void
 */
void mod(stack_t **stack, size_t line_number)
{
	(void) stack;
	(void) line_number;

	if (element->head != NULL && element->head->next != NULL)
	{
		if (element->head->n == 0)
			exit_function(13);
		element->head->next->n = element->head->next->n % element->head->n;
		pop(NULL, 0);
	}
	else
	{
		exit_function(12);
	}
}
