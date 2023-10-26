#include "main.h"
/**
*binary_to_uint - Converts binary to unsigned integer.
*@b: A pointer to the string.
*Return: returns converted number or 0 if the chars are not 0 and 1
* or if b is equals to NULL.S
*/
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int result = 0;
if (b == NULL)
{
	return (0);
}

for (i = 0; b[i] != '\0'; i++)
{
	if (b[i] != '0' && b[i] != '1')
	{
	return (0);
	}
	result = result * 2 + (b[i] - '0');
}
	return (result);
}
