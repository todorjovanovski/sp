#include <stdio.h>

void readMatrix(int a[100][100], int n, int m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

int main()
{
    int n, m, matrica[100][100];
    scanf("%d %d", &n, &m);

    readMatrix(matrica, n, m);

    int first = 1, minI, minSum, i, j;
    for(i=0; i<m; i++)
    {
        int sum = 0;
        for(j=0; j<n; j++)
        {
            sum += matrica[j][i];
        }
        if(first == 1)
        {
            first = 0;
            minI = i;
            minSum = sum;
        }
        else
        {
            if(sum < minSum)
            {
                minSum = sum;
                minI = i;
            }
        }
    }

    printf("%d", minI);


    return 0;

}
