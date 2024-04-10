#include <stdio.h>

int f(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return n%100/10 + f(n/100);
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d", f(n));

    return 0;
}
