#include <stdio.h>

int main()
{
    int i, j, *ip, *jp;

    ip = &i;
    jp = &j;

    if (ip > jp)
        printf("%p", ip);
    else
        printf("%p", jp);

    return 0;
}