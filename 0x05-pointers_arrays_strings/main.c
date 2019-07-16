#include <stdio.h>
#include "holberton.h"

int main(void){
        int n;

    n = _atoi("2147483647");
    printf("%d\n", n);
    n = _atoi("-2147483648");
    printf("%d\n", n);
    return (0);
}
