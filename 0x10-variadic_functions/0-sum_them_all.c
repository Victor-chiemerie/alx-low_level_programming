#include <stdarg.h>

/**
 * sum_them_all - adds a list of arguments
 * @n: the number of arguments
 *
 * Return: retuns the sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i = 0;
	int sum = 0;

	if (n < 1)
	{
		return (0);
	}
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);
	return (sum);
}
