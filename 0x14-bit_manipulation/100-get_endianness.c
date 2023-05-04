/**
 * get_endianness - check the endian-ness of the system
 *
 *                  check if the system is Big Endian
 *                  i.e. stores MSB (most significant byte) first
 *
 *                  or if the system is Little Endian //
 *                  i.e. stores LSB (least significant byte) first //
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	char *byte_val;
	unsigned int endian;

	endian = 1;
	byte_val = (char *) &endian;

	if (byte_val)
		return (1);
	else
		return (0);
}
