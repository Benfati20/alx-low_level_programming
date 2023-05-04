#include "main.h"

/**
 * flip_bits - find how many bits need be flipped to get another number //
 *
 * @n: first number in bit comparison //
 * @m: second number in bit comparison
 *
 * Return: Number of bits to be flipped to get same number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int num_bits;
	unsigned long int bits_cmp;

	num_bits = 0;
	bits_cmp = n ^ m;

	while (bits_cmp)
	{
		num_bits += bits_cmp & 1;
		bits_cmp = bits_cmp >> 1;
	}

	return (num_bits);
}
