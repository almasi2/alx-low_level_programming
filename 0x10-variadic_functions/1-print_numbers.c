#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function to print numbers.
 * @n: resepresents number of arguments
 * @separator: resepresents the seperator
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* creates va_list to store variable argument list */
	va_list my_nums;
	unsigned int count;

	/* init valist for number of arguments */
	va_start(my_nums, n);

	/* loops through arguments stored in the valist */
	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(my_nums, unsigned int));
		if (count < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(my_nums);
	printf("\n");
}
