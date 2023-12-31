#include "monty.h"

/**
 * check_mode - function to Check if list is in stack or queue mode.
 * @stack: A pointer to the top (stack) or bottom (queue)
 *
 * Return: If the stack_t is in stack mode - STACK (0).
 *         If the stack_t is in queue mode - QUEUE (1).
 *         Otherwise - 2.
 */
int check_mode(stack_t *stack)
{
	if (stack->n == STACK)
		return (STACK);
	else if (stack->n == QUEUE)
		return (QUEUE);
	return (2);
}
