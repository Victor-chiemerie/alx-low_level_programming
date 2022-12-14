#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: the first string parameter
 * @s2: the second string parameter
 * @n: the number of characters to be added
 *
 * Return: a pointer to the new string;
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, j = 0;
unsigned int s1_length, s2_length;
char *word;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
s1_length = strlen(s1);
s2_length = strlen(s2);
if (n >= s2_length)
n = s2_length;
word = malloc(s1_length + (n + 1));
if (word == NULL)
return (NULL);
while (*(s1 + i))
{
*(word + i) = *(s1 + i);
i++;
}
while (j < n)
{
*(word + i) = *(s2 + j);
i++;
j++;
}
*(word + i) = '\0';
return (word);
}
