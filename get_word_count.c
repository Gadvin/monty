#include "monty.h"

/**
 * get_word_count - function that gets the word count of a string
 *
 * @str: string to get word count
 * @delims: delimitors
 *
 * Return: the word count of the string
 */

int get_word_count(char *str, char *delims)
{
	int wc = 0, pending = 1, i = 0;

	while (*(str + i))
	{
		if (is_delim(str[i], delims))
			pending = 1;
		else if (pending)
		{
			pending = 0;
			wc++;
		}
		i++;
	}
	return (wc);
}
