#include <stdio.h>

void startup(void) __attribute__ ((constructor));

/**
 * startup - the function to be executed before main
 *
 * Return: Nothing
*/
void startup(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

