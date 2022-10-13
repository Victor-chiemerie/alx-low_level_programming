#include "3-calc.h"

/**
 * op_add - adds two numbers together
 * @a: first operand
 * @b: second operand
 *
 * Return: the result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts the first operand
 * from the second operand
 * @a: first operand
 * @b: second operand
 *
 * Return: the result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first operand
 * @b: second operand
 *
 * Return: the result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides the first operand
 * by the second operand
 * @a: the first operand
 * @b: the second operand
 *
 * Return: the result
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gets the module of the first operand
 * by the second operand
 * @a: the first operand
 * @b: the second operand
 *
 * Return: the result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
