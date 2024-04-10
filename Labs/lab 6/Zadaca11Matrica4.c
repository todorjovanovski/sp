#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int matrica[100][100];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &matrica[i][j]);
        }
    }

    int nova[2][2];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i < n/2 && j < n/2)
            {
                nova[0][0] += matrica[i][j];
            }
            if(i < n/2 && j > n/2)
            {
                nova[0][1] += matrica[i][j];
            }
            if(i > n/2 && j < n/2)
            {
                nova[1][0] += matrica[i][j];
            }
            if(i > n/2 && j > n/2)
            {
                nova[1][1] += matrica[i][j];
            }
        }
    }

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%d ", nova[i][j]);
        }
        printf("\n");
    }

    return 0;
}
