#include <stdio.h>
#include <string.h>

int main (int ac, char **av) {
    if (ac < 2)
        return 1;
    printf("code token: %s\n", av[1]);
    int len = strlen(av[1]);
    for (int i = 0; i < len; i++)
        av[1][i] -= i;
    printf("decode token: %s\n", av[1]);
    return 0;
}
