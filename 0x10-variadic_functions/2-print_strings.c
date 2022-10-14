#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints a list of arguments
 * @separator: the seperator
 * @n: the number of arguments
 *
 * Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i = 0;
	char *word;

	va_start(arg, n);
	while (i < n)
	{
		word = va_arg(arg, char *);
		if (word == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", word);
		if (separator && i < (n - 1))
			printf("%s", separator);
		i++;
	}
	va_end(arg);
	printf("\n");
}
