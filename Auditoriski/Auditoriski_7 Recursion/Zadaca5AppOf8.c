#include <stdio.h>

int counter8(int n)
{
    if(n == 0)
    {
        return 0;
    }
    if(n % 100 == 88)
    {
        return 2 + counter8(n/10);
    }
    if(n % 10 == 8)
    {
        return 1 + counter8(n/10);
    }
    return counter8(n/10);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("Broj na osmici: %d", counter8(n));

    return 0;
}
