#include <stdio.h>
#include "holberton.h"

int main(void){
    char s[] = "Holberton";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
