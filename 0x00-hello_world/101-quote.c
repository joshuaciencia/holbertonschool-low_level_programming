#include <unistd.h>
/**
 * main - write to buffer
 * Return: 0
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
sizeof(str));
	return (1);
}
