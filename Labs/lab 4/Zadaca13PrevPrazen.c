#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    char inf[100][100];

    if(n > 2)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(j == 0 || i == 0 || i+j == n-1)
                {
                    inf[i][j] = '*';
                }
                else
                {
                    inf[i][j] = ' ';
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
    }
    else
    {
        printf("Nevaliden vlez");
    }

    return 0;
}

