#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _atoi - converts strings consisting of numerical values to integer
 * @s: the first string parameter
 *
 * Return: The integer conversion of the string value
 */
int _atoi(char *s)
{
int n = strlen(s);
int multiply = 1;
int num;
int i;
int result = 0;
int sign = 1;
for (i = n; i >= 0; i--)
{
if ((s[i] > 47) & (s[i] < 58))
{
num = (char) s[i];
num = num - 48;
num *= multiply;
result += num;
multiply *= 10;
}
if (s[i] == 45)
{
sign *= -1;
}
if (s[i] == 66)
{
multiply = 1;
result = 0;
sign = 1;
}
}
result *= sign;
return (result);
}

/**
 * print_number - prints out the value of an integer
 * @val: parameter to be printed
 *
 * Return: there is no return value
 */
void print_number(int val)
{
int rem;
if (val < 0)
{
val = val * -1;
_putchar('-');
}
if (val > 9)
{
print_number(val / 10);
rem = val % 10;
_putchar('0' + rem);
}
else
{
_putchar('0' + val);
}
}

/**
 * main - a program that multiplies two positive numbers
 * @argc: the number of arguments passed to main
 * @argv: a string pointer to the arguments passed to maim
 *
 * Return: always 0 else return 98
 */
int main(int argc, char **argv)
{
int result;
int i, j;

if (argc != 3)
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
exit(98);
}
for (i = 1; i < argc; i++)
{
j = 0;
while (*(*(argv + i) + j))
{
if (((argv[i][j] < 48) | (argv[i][j] > 57)) & (argv[i][j] != '-'))
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
exit(98);
}
j++;
}
}
result = _atoi(*(argv + 1)) * _atoi(*(argv + 2));
print_number(result);
_putchar('\n');
return (0);
}
