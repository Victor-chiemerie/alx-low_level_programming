#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concancates two strings
 * @s1: the first string to be concancated
 * @s2: the second string to be concancated
 *
 * Return: a pointer to the string or NULL if str is NULL
 */
char *str_concat(char *s1, char *s2)
{
int n1 = 0;
int n2 = 0;
int i;
int j;
int k;
int sum;
char *ch;

if (((s1 != NULL) | (s2 != NULL)))
{
if (s1 != NULL)
{
do {
n1++;
} while (*(s1 + n1));
}
if (s2 != NULL)
{
do {
n2++;
} while (*(s2 + n2));
}
sum = n1 + n2;
ch = malloc((sum + 1) * (sizeof(char)));
if  (ch == NULL)
{
return (NULL);
}
for (j = 0; j < n1; j++)
{
*(ch + j) = *(s1 + j);
}
for (k = j, i = 0; k < sum; k++, i++)
{
*(ch + k) = *(s2 + i);
}
*(ch + k) = '\0';
return (ch);
}
else
return (NULL);
}
