#include "monty.h"

/**
  * pint - prints the value at the top of the stack, followed by a new line
  * @stack: ptr to the top of the stack
 * @line_number: the line number of the command being execute
  * Return: nothing, void
  */
void pint(stack_t **stack, size_t line_number)
{
	(void) stack;
	(void) line_number;

	if (element->head == NULL)
		exit_function(5);
	printf("%d\n", element->head->n);
}

/**
  * pop - removes the top element of the stack
  * @stack: ptr to the top of the stack
  * @line_number: the line number of the command being execute
  * Return: nothing, void
  */
void pop(stack_t **stack, size_t line_number)
{
	stack_t *traverse;

	(void) stack;
	(void) line_number;

	if (element->head == NULL)
		exit_function(6);
	traverse = element->head->next;
	if (traverse != NULL)
		traverse->prev = NULL;
	free(element->head);
	element->head = traverse;
}

/**
 * swap - swaps the top two elements of the stack
 * @stack: ptr to the top of the stack
 * @line_number: the line number of the command being execute
 * Return: void
 */
void swap(stack_t **stack, size_t line_number)
{
	int temp = 0;

	(void) stack;
	(void) line_number;
	if (element->head != NULL && element->head->next != NULL)
	{
		temp = element->head->n;
		element->head->n = element->head->next->n;
		element->head->next->n = temp;
	}
	else
	{
		exit_function(7);
	}
}

/**
  * nop - doesn’t do anything
  * @stack: ptr to the top of the stack
  * @line_number: the line number of the command being execute
  * Return: void
  */
void nop(stack_t **stack, size_t line_number)
{
	(void) stack;
	(void) line_number;
}
