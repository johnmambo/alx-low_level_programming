#include "function_ponters.h"
/**
 * print_name - prints a name
 * @name: string
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name)
}
