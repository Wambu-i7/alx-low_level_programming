#include "main.h"
/**
*print_binary - prints binary numbers.
*@n: integer converted to binary.
*Return: Nothing.
*/


void print_binary(unsigned long int n)
{
	int start_print = 0;
	int i;
	unsigned long int bits;


	for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
	{
	bits = 1UL << i;
	if (n & bits)
	{
	start_print = 1;
	_putchar('1');
	}
	else if (start_print)
	{
	putchar('0');
	}
	}


	if (!start_print)
	{
	_putchar('0');
	}
}
