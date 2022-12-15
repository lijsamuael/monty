#include "monty.h"

/**
 * _pop - function that removes the top element of the stack.
 * @stack: double pointer to head of the dlistint_t liststack.
 * @line_number: line on the monty code where this function was called.
 *
 * Return: void.
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;
	stack_t *temp2 = NULL;
	int i = 0, j = 0, flag = 0;

	if (stack == NULL)
	{
		free_dlistint(*stack);
		pop_e(line_number); }
		if (*stack == NULL)
		{
			free_dlistint(*stack);
			pop_e(line_number); }
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
			{
				free(*stack);
				*stack = NULL;
				return;
			}
			else
			{
				temp2->next = NULL;
				free(temp);
				temp = NULL;
				return;
			}
		}
