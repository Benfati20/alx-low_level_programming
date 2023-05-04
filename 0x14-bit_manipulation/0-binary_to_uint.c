#include "main.h"

/**
 * binary_to_uint - convert a binary to an unsigned integer////
 *
 * @b: array of char holding the binary representation of an integer
 *
 * Return: result of conversion
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	int len;
	int pow_val;
	unsigned int converted;

	pow_val = 1;
	converted = 0;

	if (!b)
		return (0);

	i = 0;
	len = strlen(b) - 1;

	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		i++;
	}

	i = len;

	while (i >= 0)
	{
		if (b[i] == '1')
			converted = converted + pow_val;

		pow_val *= 2;
		i--;
	}

	return (converted);
}
