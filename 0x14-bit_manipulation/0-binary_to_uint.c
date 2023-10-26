#include "main.h"
/**
*binary_to_uint - Converts binary to unsigned integer.
*@b: A pointer to the string.
*Return: returns converted number or 0 if the chars are not 0 and 1
* or if b is equals to NULL.S
*/


unsigned int binary_to_uint(const char *b)
{
	int i, length = strlen(b);
	unsigned int result = 0;


	if (b == NULL)
	return (0);


	for(i = 0; i < length; i++)
	{
	if (b[i] == '0' || b[i] == '1')
	{
	result = result | (b[i] - '0') << (length - 1 - i);;
	}
	else
	return (0);
	}
	return (result);
}
