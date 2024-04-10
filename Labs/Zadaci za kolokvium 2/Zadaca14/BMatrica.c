#include <stdio.h>

int main()
{
    int n, matrica[50][100], b[100][50];
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n*2; j++)
        {
            scanf("%d", &matrica[i][j]);
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n*2; j++)
        {
            if(j<n)
            {
                b[i][j] = matrica[i][j];
            }
            else{
                b[i+n][j-n] = matrica[i][j];
            }
        }
    }

    for(int i=0; i<n*2; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
