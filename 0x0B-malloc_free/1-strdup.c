#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - replicates a string
 * @str: the size of the array
 *
 * Return: a pointer to the array or NULL if str is NULL
 */
char *_strdup(char *str)
{
int n = 0;
int j;
char *ch;

if (str == (NULL))
{
return (NULL);
}
do {
n++;
} while (*(str + n));
ch = malloc((n + 1) * (sizeof(char)));
if  (ch == NULL)
{
return (NULL);
}
for (j = 0; *(str + j); j++)
{
*(ch + j) = *(str + j);
}
return (ch);
}
