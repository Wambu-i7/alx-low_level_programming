/**
*get_endianness - Getting the endianness of a system.
*Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
	unsigned int x = 1;
	char *byte = (char *)&x;

	if (*byte == 1)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
