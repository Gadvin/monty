#include "monty.h"

/**
 * f_open_error - function Prints file opening error messages
 * @filename: Name of file
 *
 * Return: (EXIT_FAILURE) always.
 */
int f_open_error(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	return (EXIT_FAILURE);
}
