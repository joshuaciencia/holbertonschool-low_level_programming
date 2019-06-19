#include <stdio.h>

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i;
	int size = sizeof(str) / sizeof(str[0]);
	for(i = 0; i < size; i++){
		/*putchar((char)str[i]);*/
	}
	fprintf(stderr, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	/*putchar('\n');*/
	return 1;

}

