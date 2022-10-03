#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the multiplication of arguments passed to it
 * @argc: argument count
 * @argv: argument vector
 * 
 * Return: always 0
 */
int main(int argc, char* argv[])
{
        int i, result = 1;
        if (argc > 1)
        {
            for ( i = 1; i < argc; i++)
            {
                result *= atoi(argv[i]);
            }
            printf("%d\n", result);
        }
        else 
        printf("Error\n");
        return (0);
}
