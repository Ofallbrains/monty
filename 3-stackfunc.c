#include "monty.h"

/**
  * pchar - prints the char at the top of the stack, followed by a new line
  * @stack: the double pointer to the beginning of the list (NULL)
  * @line_number: the line of the file it's on (always passed 0)
  * Return: nothing, void
  */
void pchar(stack_t **stack, size_t line_number)
{
	(void) stack;
	(void) line_number;

	if (element->head == NULL)
		exit_function(15);
	if (element->head->n < 0 || element->head->n > 127)
		exit_function(14);
	putchar(element->head->n);
	putchar('\n');
}

/**
  * pstr - prints the string starting at the top of the stack,
  * followed by a new line
  * @stack: the double pointer to the beginning of the list (NULL)
  * @line_number: the line of the file it's on (always passed 0)
  * Return: nothing, void
  */
void pstr(stack_t **stack, size_t line_number)
{
	stack_t *traverse;

	(void) stack;
	(void) line_number;
	traverse = element->head;
	while (traverse != NULL)
	{
		if (traverse->n < 1 || traverse->n > 127)
			break;
		putchar(traverse->n);
		traverse = traverse->next;
	}
	putchar('\n');
}

/**
 * rotl - rotates the stack to the top
 * @stack: ptr to the top of the stack
 * @line_number: the line number of the command being execute
 * Return: void
 */
void rotl(stack_t **stack, size_t line_number)
{
	stack_t *end = element->head, *head = element->head;

	(void) stack;
	(void) line_number;
	if (end && end->next)
	{
		while (end->next)
			end = end->next;
		element->head = head->next;
		head->prev = end;
		head->next = NULL;
		end->next = head;
		element->head->prev = NULL;
	}
}

/**
 * rotr - rotates the stack to the bottom
 * @stack: ptr to the top of the stack
 * @line_number: the line number of the command being execute
 * Return: void
 */
void rotr(stack_t **stack, size_t line_number)
{
	stack_t *end = element->head, *head = element->head;

	(void) stack;
	(void) line_number;
	if (end && end->next)
	{
		while (end->next)
			end = end->next;
		end->prev->next = NULL;
		head->prev = end;
		end->next = head;
		end->prev = NULL;
		element->head = end;

	}
}
