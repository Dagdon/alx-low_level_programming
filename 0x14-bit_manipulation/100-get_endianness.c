#include "main.h"

/**
 * get_endianness - checks for endianness
 * Return: 1 or 0
 */

int get_endianness(void)
{
	int a = 1;
	int endian;

	endian = (int) (((char *)&a)[0]);
	return (endian);
}
