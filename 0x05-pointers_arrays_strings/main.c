#include <stdio.h>
#include "holberton.h"

int main(void){
        int n;

    n = _atoi(" + + - -98 Battery Street; San Francisco, CA 94111 - USA ");
    printf("%d\n", n);
    n = _atoi("-2147483648");
    printf("%d\n", n);
    n = _atoi("+++++ +-+ 2242454");
    printf("%d\n", n);
    n = _atoi("214748364");
    printf("%d\n", n);
    n = _atoi("-3");
    printf("%d\n", n);
    n = _atoi(" ------++++++-----+++++--98");
    printf("%d\n", n);
    n = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", n);
    n = _atoi("Hello ----- world\n");
    printf("%d\n", n);
    return (0);
}
