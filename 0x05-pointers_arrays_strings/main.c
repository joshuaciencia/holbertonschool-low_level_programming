#include <stdio.h>
#include "holberton.h"

int main(void){
    char s[9] = "Holberto";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
