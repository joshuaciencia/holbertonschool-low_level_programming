#include <stdio.h>
#include "holberton.h"

int main(void){
    char s[10] = "camisa";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
