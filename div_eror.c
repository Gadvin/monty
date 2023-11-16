#include "monty.h"

/**
 * div_error - function that Prints division error messages
 * @line_number: Line number in Monty bytecodes file where error occurred
 *
 * Return: (EXIT_FAILURE) always
 */
int div_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: division by zero\n", line_number);
	return (EXIT_FAILURE);
}
