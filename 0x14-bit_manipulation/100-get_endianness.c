#include "main.h"

/**
 * get_endianness - find out whether a machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &a;

	return (*c);
}
