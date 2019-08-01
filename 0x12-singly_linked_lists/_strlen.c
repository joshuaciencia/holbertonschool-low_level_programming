/**
 * _strlen - Swaps integers wih pointers.
 * @s: is a pointer to a char
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
