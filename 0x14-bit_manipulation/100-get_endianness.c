#include "main.h"

/**
 * get_endianess - gets the endianess of the machine
 *
 * Return: int; 0 if big-endian or 1 if little_endian
 * TheOwl
 */
int get_endianess(void)
{
	int i = 1;
	char *c = (char *)(&i);

	if (*c == 1)
		return (1);
	else
		return (0);
}
