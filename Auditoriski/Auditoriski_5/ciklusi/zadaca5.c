#include <stdio.h>

int main()
{
    int m, n, cifra, temp, pal;
    printf("Vnesi opseg:\n");
    scanf("%d %d", &m, &n);

    for (int i=m; i<=n; i++)
    {
        temp = i;
        pal = 0;
        while(temp>0)
        {
            cifra = temp%10;
            pal = pal*10 + cifra;
            temp /= 10;
        }
        if (pal == i)
        {
            printf("\n%d", i);
        }
    }
    return 0;
}
