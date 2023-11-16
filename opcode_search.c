#include "monty.h"

/**
  * opcode_search - searches for opcode in struct
  * Return: Nothing, void
  */
void opcode_search(void)
{
	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"div", divide},
		{"add", add},
		{"swap", swap},
		{"mul", mul},
		{"mod", mod},
		{"sub", sub},
		{"nop", nop},
		{"pchar", pchar},
		{"pstr", pstr},
		{"rotl", rotl},
		{"rotr", rotr},
		{"stack", lifo},
		{"queue", fifo},
		{NULL, NULL}
	};

	int i;

	if (element->tokened[0] == NULL)
		return;
	if (element->tokened[0][0] == '#')
	{
		ops[10].f(NULL, 0);
		return;
	}
	for (i = 0; ops[i].opcode != NULL; i++)
	{
		if (strcmp(element->tokened[0], ops[i].opcode) == 0)
		{
			ops[i].f(NULL, 0);
			break;
		}
	}
	if (ops[i].opcode == NULL)
		exit_function(2);
}
