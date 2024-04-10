#include <stdio.h>

int main()
{
    int n;
    float matrica[100][100], x = 0, y = 0;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%f", &matrica[i][j]);
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i > j)
            {
                x += matrica[i][j];
            }
            if(i+j > n-1)
            {
                y += matrica[i][j];
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i == j && i+j == n-1)
            {
                matrica[i][j] = x+y;
            }
            else if(i == j){
                matrica[i][j] = x;
            }
            else if(i+j == n-1){
                matrica[i][j] = y;
            }
            else{
                matrica[i][j] = 0;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%.1f ", matrica[i][j]);
        }
        printf("\n");
    }

    return 0;
}
