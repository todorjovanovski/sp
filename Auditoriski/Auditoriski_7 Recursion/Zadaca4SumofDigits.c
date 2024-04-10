#include <stdio.h>

int sum(int n)
{
    if(n < 10)
    {
        return n;
    }
    return n%10 + sum(n/10);
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("Sum of digits = %d", sum(n));

    return 0;
}
