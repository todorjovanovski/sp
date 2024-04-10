#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    char inf[100][100];

    if(n >= 5)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i == 0 || i == n-1 || i+j == n-1 || i == j)
                {
                    inf[i][j] = '*';
                }
                else
                {
                    inf[i][j] = ' ';
                }
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%c", inf[i][j]);
        }
        printf("\n");
    }

    return 0;
}

