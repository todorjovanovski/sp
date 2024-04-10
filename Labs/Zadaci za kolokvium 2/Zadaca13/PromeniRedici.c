#include <stdio.h>

int main()
{
    int x, m, n, matrica[100][100], niza[100];
    scanf("%d%d%d", &x, &m, &n);

    for(int i=0; i<m; i++)
    {
        int sum = 0;
        for(int j=0; j<n; j++)
        {
            scanf("%d", &matrica[i][j]);
            sum += matrica[i][j];
        }
        niza[i] = sum;
    }

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(niza[i] > x){
                matrica[i][j] = 1;
            }
            else if(niza[i] < x){
                matrica[i][j] = -1;
            }
            else{
                matrica[i][j] = 0;
            }
        }
    }

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ", matrica[i][j]);
        }
        printf("\n");
    }

    return 0;
}
