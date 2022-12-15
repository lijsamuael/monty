#include "monty.h"

/**
 * _push - function that adds a new value to the stack.
 * @stack: double pointer to the head of the stack.
 * @line_number: number of the line of execution.
 *
 * Return: void.
 */

void push(stack_t **stack, unsigned int line_number)
{
	int n = 0;

	if (globalvar.token2 == NULL)
	{
		free_dlistint(*stack);
		stderr_int(line_number);
	}
	if (!_isdigit() || stack == NULL)
	{
		free_dlistint(*stack);
		stderr_int(line_number);
	}
	n = atoi(globalvar.token2);
	if (*stack  == NULL)
	{
		create_node_stackfirst(stack, n);
	}
	else
	{
		create_node_stackend(stack, n);
	}
}
