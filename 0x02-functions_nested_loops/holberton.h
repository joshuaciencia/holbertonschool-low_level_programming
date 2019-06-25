#ifndef HOLBERTON
#define HOLBERTON

int _putchar(char c);
/**
 * print_alphabet - prints alphabet
 * Return: the result of the adition
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int n);
int print_last_digit(int d);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
#endif
