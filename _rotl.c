#include "monty.h"

/**
 * _rotl - function that rotates the stack to the top.
 *         top element of the stack becomes the last one.
 * @stack: pointer to the head of the stack.
 * @line_number: line in monty code of where this function was called
 *
 * Return: void.
 */

void rotrl(stack_t **stack, unsigned int line_number)
{
	stack_t *temp2 = NULL;
	stack_t *temp = NULL;
	(void)line_number;

	if (*stack == NULL || ((*stack)->next == NULL))
	return;
	temp = *stack;
	while (temp->next != NULL)
	temp = temp->next;
	temp2 = temp->prev;
	temp2->next = NULL;
	temp->prev = NULL;
	temp->next = *stack;
	(*stack)->prev = temp;
	*stack = temp;
}
 /**
  * rotr - rotate to left
  * @stack: head of linkedlist
  * @line_number: line number of the instruction
  */
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp2 = NULL;
	(void)line_number;

	if (*stack == NULL)
	return;
	temp2 = *stack;
	while (temp2->next != NULL)
	temp2 = temp2->next;
	temp2->next = *stack;
	(*stack)->prev = temp2;
	temp2 = (*stack)->next;
	(*stack)->next = NULL;
	*stack = temp2;
	(*stack)->prev = NULL;
}
