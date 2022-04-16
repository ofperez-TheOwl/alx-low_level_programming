#include <stdlib.h>

/**
 * print_name - execute a function given as a parameter
 * @name: pointer to char; parameter the function to execute
 * @f:pointer to function taking char-pointer argument;function to execute
 *
 * Return: nothing
 * TheOwl
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
