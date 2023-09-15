#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns sum of all parameters.
 * @n: number of arguments
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	/* va_list to store variable argument list */
	va_list my_nums;
	unsigned int count;
	int sum;

	if (n == 0)
		return (0);
	sum = 0;

	/* init valist for number of arguments */
	va_start(my_nums, n);

	/* loops through arguments in the valist */
	for (count = 0; count < n; count++)
		sum += va_arg(my_nums, int);
	va_end(my_nums);
	return (sum);
}
