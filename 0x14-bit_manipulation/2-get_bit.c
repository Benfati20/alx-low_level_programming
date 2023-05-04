#include "main.h"

/**
 * get_bit -- get the bit at a given index//
 *
 * @n: number to be converted to bits and parsed
 *     to get a bit at certain index
 *
 * @index: index of bit to be returned
 *
 * Return: bit found at given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 53)
		return (-1);

	return ((n >> index) & 1);
}
