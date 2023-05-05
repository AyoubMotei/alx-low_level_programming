/*
 * binary_to_uint - converts a binary number in a string to an unsigned int
 *
 * @b: string containing the binary number to be converted
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	/* Check if input is NULL */
	if (!b)
		return (0);

	/* Iterate through the string and convert binary to decimal */
	for (i = 0; b[i]; i++)
	{
		/* Check if each character is a valid binary digit */
		if (b[i] < '0' || b[i] > '1')
			return (0);

		/* Convert binary digit to decimal and add to result */
		dec_val = 2 * dec_val + (b[i] - '0');
	}

	return (dec_val);
}
