#include "monty.h"

/**
 * _reverse - reverses a whole doubly linked list.
 * @stack: head of the doubly linked list.
 * @line_number: number of the line where a calling function was called.
 *
 * Return: void
 */


void _reverse(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	stack_t *node = NULL, *aux = *stack;

	if (stack == NULL || *stack == NULL)
		return;
	while (1)
	{
		node = aux;
		aux = node->next;
		node->next = node->prev;
		node->prev = aux;
		if (node->prev == NULL)
			break;
	}
	*stack = node;
}
