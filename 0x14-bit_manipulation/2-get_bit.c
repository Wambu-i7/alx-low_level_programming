#include "main.h"

/**
*get_bit - Getting the bit at index.
*@n: Integer to extract the bit from.
*@index: Index of the bits.
*Return: the value of the bit at index index or -1 if an error occurred.
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int bit_value;

	if (index >= (sizeof(unsigned long int) * 8))
	return (-1);

	mask = 1UL << index;
	bit_value = (n & mask) ? 1 : 0;
	return (bit_value);
}

