#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the minimum number of coins to make change for an amount of money
 * @argc: argument count
 * @argv: argument vector
 * 
 * Return: always 0
 */
int main(int argc, char* argv[])
{
  int i;
  int result;
  int j;
   if (argc == 2)
    {
      if ( atoi(argv[1]) < 25)
	{
	  printf("%d\n", 1);
	  return (0);
	}
      i = atoi(argv[1]) / 25;
      j = atoi(argv[1]) % 25;
      result = i + j;
      printf("%d\n", result);
      return (0);
    }
  else
    printf("Error\n");
  return (1);
}
