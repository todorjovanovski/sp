#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if(n % 3 == 0 && n % 5 == 0)
    {
        printf("Tik - Tak");
    }
    else if (n % 3 == 0)
    {
        printf("Tik");
    }
    else if (n % 5 == 0)
    {
        printf("Tak");
    }
    else
    {
        printf("Losh Broj");
    }

    return 0;
}
