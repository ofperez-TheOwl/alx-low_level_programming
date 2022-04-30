#include <stdio.h>

/**
 * this function executes before the main function
 * the declaration of "__attribute__ ((constructor))" is the key
 * TheOwl
 */
void __attribute__ ((constructor)) execute_before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
