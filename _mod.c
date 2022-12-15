#include "monty.h"


/**
 * _mod - computes the rest of the division of the second by the first
 *        element of the stack.
 * @stack: head of the stack.
 * @line_number: line number in the code where this function was called.
 *
 * Return: void.
 */

void mod_m(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;
	stack_t *temp2 = NULL;
	int i = 0, j = 0, flag = 0;

	if (*stack == NULL || stack == NULL)
	{
		op_e(line_number, "mod");
	}
	temp = *stack;
	while (temp->next != NULL)
	{
		temp = temp->next;
		i++;
		flag = 1;
	}
	temp2 = *stack;
	while (j < (i - 1))
	{
		temp2 = temp2->next;
		j++;
	}
	if (i == 0 && flag == 0)
	free_dlistint(*stack), op_e(line_number, "mod");
	else
	{
		if (temp->n == 0)
		div_e(line_number);
		temp2->n = temp2->n % temp->n;
		temp2->next = NULL;
		free(temp);
		temp = NULL;
		return;
	}
}
