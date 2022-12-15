#include "monty.h"

/**
 * _swap - swaps the top two elements of the stack.
 * @stack: head of the stack.
 * @line_number: number in file where this function was called.
 *
 * Return: void.
 */

void swap(stack_t **stack, unsigned int line_number)
{
stack_t *temp;
int i, j;

if (*stack == NULL || stack == NULL)
op_e(line_number, "swap");
temp = (*stack)->next;
if ((*stack)->next == NULL)
op_e(line_number, "swap");
while (temp->next != NULL)
{
	temp = temp->next;
}
i = temp->n;
j = temp->prev->n;
temp->n = j;
temp->prev->n = i;
}
