#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: the string to be printed
 * @f: a pointer to a function parameter
 *
 * Return: there is no return value
 */
void print_name(char *name, void (*f)(char *))
{
	  f(name);
}
