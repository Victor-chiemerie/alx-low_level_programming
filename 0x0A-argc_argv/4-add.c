#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * 
 * Return: always 0
 */
int main(int argc, char* argv[])
{
  int i, result = 0;
  if (argc > 1)
    {
      for ( i = 1; i < argc; i++)
	{
	  result += atoi(argv[i]);
	  if (atoi(argv[i]) == 0)
	    {
	      printf("Error\n");
		return (1);
	    }

	}
      printf("%d\n", result);
    }
  else
    printf("0\n");
  return (0);
}
