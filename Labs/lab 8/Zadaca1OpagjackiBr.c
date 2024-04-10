#include <stdio.h>

int rec(int x)
{
    if(x < 10)
    {
        return 1;
    }
    else if(x%10 >= x%100/10)
    {
        return 0;
    }

    return rec(x/10);
}

int main()
{
    int n, broj;

    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &broj);
        printf("%d\n", rec(broj));
    }

    return 0;
}
