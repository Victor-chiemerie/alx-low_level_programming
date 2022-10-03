#include <stdio.h>
/**
 * main - prints the name of the program
 * @argc: argument count
 * @argv: argument vector
 * 
 * Return: always 0
 */
int main(int argc, char* argv[])
{
        (void)argv;
        printf("%d\n", argc - 1);
        return (0);
}
