#include<unistd.h>
#include<stddef.h>
#include "lists.h"

/**
 * _putchar - Custom _putchar function to print characters
 * @c: The character to be printed
 *
 * Return: On success, return the charater to be printed.
 * On error, return -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_list - Prints all the elements of a list_t list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0; /* To keep track of the number of nodes */

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			unsigned int i;

			for (i = 0; h->str[i] != '\0'; i++)
				_putchar(h->str[i]);
		}
		else
		{
			_putchar('(');
			_putchar('n');
			_putchar('i');
			_putchar('l');
			_putchar(')');
		}
		_putchar('\n');
		count++;
		h = h->next;
	}
	return (count);
}
