#include <stdio.h>
#ifndef MAIN_C
#define MAIN_C
#define NAME __FILE__
#endif
/**
 * main - prints the name of the file
 *
 * Return: always 0
 */
int main(void)
{
	printf("%s\n", NAME);
	return (0);
}
