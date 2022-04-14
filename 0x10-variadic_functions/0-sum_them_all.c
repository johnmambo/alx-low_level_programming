#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all arguments
 * @n: int, number if undefined arguments
 *
 * Return: sum of args
 * On error, 0 is returned
 */
int sum_them_all(const unsegnied int n, ...)
{
	va_list list;
	unsigned int i, sum = o;

	va_start(list, n);
	if (n != 0)
		for (i = 0; i < n; sum += va_arg(list, unsigned int), i++)
		;
	va_end(list);

	return (sum);
}
