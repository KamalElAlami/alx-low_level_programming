#include <stdlib.h>
/**
 * print_name - a function that prints a name
 * @name: a name to print
 * @f: a pointer to a function that prints strings
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
