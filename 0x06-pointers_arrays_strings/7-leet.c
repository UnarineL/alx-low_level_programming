/**
 * leet - encodes a string into 1337
 * @str: takes the string to encode
 *
 * Return: string
 */
char *leet(char *str)
{
	int i;
	int j;
	char *leet_str = str;
	char *letters = "aAeEoOtTlL";
	char *leet_lett = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				leet_str[i] = leet_lett[j];
				break;
			}
		}
	}
	return (leet_str);
}
