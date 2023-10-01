#include "main.h"
#include <stdio.h>
/**
 * get_bit - give value of a bit at given index
 * @n: number for evaluation
 * @index: index starting from 0 of bit we want to get
 * Return: Value of bit at index, -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	hold = n >> index;

	return (hold & 1);
}
