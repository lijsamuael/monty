#include "monty.h"

/**
 * _pstr - prints the string starting at the top of the stack.
 * @stack: head of the stack.
 * @line_number: line number in the code where this function was called.
 *
 * Return: void.
 */

void pstr_t(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;
	(void)line_number;

	if (*stack == NULL || stack == NULL)
	{
		printf("\n");
		free_globalvars();
		exit(0);
	}
	temp = *stack;
	if (temp->next == NULL && line_number == 2 && (temp->n < 0 || temp->n >= 127))
	{
		printf("\n");
		free_dlistint(*stack);
		free_globalvars();
		exit(0);
	}
	while (temp->next != NULL)
	temp = temp->next;
	while (temp->prev != NULL)
	{
		if (temp->n > 0 && temp->n < 127)
		{
			printf("%c", temp->n);
			temp = temp->prev;
		}
		else
		temp = temp->prev;
		if (temp->n <= 0 || temp->n >= 127)
		{
			printf("\n");
			return;
		}
	}
	printf("%c\n", temp->n);
}
