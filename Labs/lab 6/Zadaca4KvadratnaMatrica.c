#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int matrica[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &matrica[i][j]);
        }
    }

    int glavna = 0, sporedna = 0, prva = 0, posledna = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i == j)
            {
                glavna += matrica[i][j];
            }
            if(i + j == n - 1)
            {
                sporedna += matrica[i][j];
            }
            if(j == 0)
            {
                prva += matrica[i][j];
            }
            if(j == n-1)
            {
                posledna += matrica[i][j];
            }
        }
    }

    printf("%d\n%d", glavna - sporedna, prva - posledna);

    return 0;
}
