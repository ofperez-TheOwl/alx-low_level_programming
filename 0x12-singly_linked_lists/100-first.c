#include <stdio.h>

/**
 * execute_before_main - this function executes before the main
 * function and prints messages
 * the declaration of "__attribute__ ((constructor))" is the key
 *
 * Return: nothing
 * TheOwl
 */
void __attribute__ ((constructor)) execute_before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
