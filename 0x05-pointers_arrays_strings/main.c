#include <stdio.h>
#include "holberton.h"

int main(void){
	char *str;

    int len;

    str = "Holberton!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
