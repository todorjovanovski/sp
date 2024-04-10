#include <stdio.h>

int max_digit(int n)
{
    if(n == 0)
    {
        return 0;
    }
    int a = n%10;
    int b = max_digit(n/10);
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int broj;

    while(scanf("%d", &broj))
    {
        printf("%d\n", max_digit(broj));
    }

    return 0;
}
