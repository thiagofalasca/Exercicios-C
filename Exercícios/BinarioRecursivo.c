#include <stdio.h>

int Convert(int n)
{
    if (n == 0)
        return 0;
    if (n % 2 == 0)
    {
        Convert(n / 2);
        printf("0");
    }
    else
    {
        Convert(n / 2);
        printf("1");
    }
}
int main()
{
    int n;

    printf("Digite o numero para converter: ");
    scanf("%d", &n);

    Convert(n);

    return 0;
}