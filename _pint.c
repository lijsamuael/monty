#include "monty.h"

/**
 * _pint - function that prints the top of the stack.
 * @stack: pointer to the head of the stack.
 * @line_number: line in monty code of where this function was called
 *
 * Return: void.
 */
void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;

	if (stack == NULL || *stack == NULL)
	{
		pint_e(line_number);
		return;
	}
	temp = *stack;
	while (temp->next != NULL)
	temp = temp->next;
	printf("%d", temp->n);
	printf("\n");
}
