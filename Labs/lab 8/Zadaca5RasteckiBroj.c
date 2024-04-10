#include <stdio.h>

int f(int x)
{
    if(x == 0)
    {
        return 1;
    }
    else if(x%10 <= x%100/10)
    {
        return 0;
    }
    return f(x/10);
}

int main()
{
    int n, broj;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &broj);
        if(f(broj))
        {
            printf("DA\n");
        }
        else
        {
            printf("NE\n");
        }
    }

    return 0;
}
