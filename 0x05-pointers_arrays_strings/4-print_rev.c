#include "main.h"

/**
* print_rev - print a string in reverse.
*
*@s: the string to print in reverse.
*
*/

void print_rev(char *s)
{
int i = 0;
int length;

for (length = 0; s[length] != '\0'; length++)
{
