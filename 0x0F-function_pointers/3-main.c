#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - the motherboard
 * @argc: the number of arguments
 * @argv: the strings
 *
 * Return: nothing
*/
int main(int argc, char **argv)
{
	int a, b, result;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((!get_op_func(argv[2])) || argv[2][1] != '\0')
	{
		printf("Error\n");
		return (99);
	}
	if (((argv[2][0] == '/') | (argv[2][0] == '%')) & (b == 0))
	{
		printf("Error\n");
		return (100);
	}
	result = get_op_func(argv[2])(a, b);
	printf("%d\n", result);
	return (0);
}
