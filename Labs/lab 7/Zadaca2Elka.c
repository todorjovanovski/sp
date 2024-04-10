#include <stdio.h>

void elka(int n)
{
    int p = n/2, q = n/2;
    for(int i=0; i<n/2+1; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(j >= p && j <= q)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        p--;
        q++;
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    elka(n);

    return 0;
}
