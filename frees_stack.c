#include "monty.h"

/**
 * frees_stack - This function releases all memory space
 * taken up by elements in the stack
 *
 * Return: Nothing
 */

void frees_stack(void)
{
	stack_t *temp = NULL;

	if (head)
	{
		temp = head;

		while (temp)
		{
			head = head->next;
			free(temp);
			temp = head;
		}
	}
}
