#include "monty.h"

/**
 * create_node_stack - create a node stack.
 * @stack: A pointer to top and bottom stack.
 * Return: EXIT SUCCESS
 */
int create_node_stack(stack_t **stack)
{
	stack_t *p;

	p = malloc(sizeof(stack_t));
	if (p == NULL)
		stderr_malloc();
	p->n = STACK;
	p->prev = NULL;
	p->next = NULL;

	*stack = p;

	return (EXIT_SUCCESS);
}
/**
 * free_node_stack - Frees a stack_t stack.
 * @stack: A pointer to top and bottom stack.
 */
void free_node_stack(stack_t **stack)
{
	stack_t *temp_node = *stack;

	while (*stack)
	{
		temp_node = (*stack)->next;
		free(*stack);
		*stack = temp_node;
	}
}
/**
 * check_opcode - checks if STACK or QUEUE.
 * @stack: A pointer to top and bottom stack.
 * Return: The value of Stack or Queue
 */
int check_opcode(stack_t *stack)
{
	int ret_val = 2;

	if (stack->n == STACK)
		return (STACK);
	else if (stack->n == QUEUE)
		return (QUEUE);
	return (ret_val);
}
/**
 * array_len - calculates the array of a token.
 * Return: Lenght of the token.
 */
unsigned int array_len(void)
{
	unsigned int token_len = 0;

	while (globalvar.token2[token_len])
		token_len++;
	return (token_len);
}
/**
 * tokerr - makes the last element of instructions as error code.
 * @error_status: type int where the error is saved as srt.
 */
void tokerr(int error_status)
{
	int token_len = 0, i = 0;
	char *exit_str = NULL;
	char *new_token = NULL;

	token_len = array_len();
	new_token = malloc(sizeof(char *) * (token_len + 2));
	if (!globalvar.token2)
	{
		stderr_malloc();
		return;
	}
	while (i < token_len)
	{
		new_token[i] = globalvar.token2[i];
		i++;
	}
	exit_str = get_int(error_status);
	if (!exit_str)
	{
		free(globalvar.token2);
		stderr_malloc();
		return;
	}
	free(globalvar.token2);
	globalvar.token2 = new_token;
}
