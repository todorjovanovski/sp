#include <stdio.h>

int main()
{
    int n, counter = 0;
    scanf("%d", &n);
    char inf[100][100];

    if(n > 2)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(j == n-1 || i == n-1 || i+j == n-1)
                {
                    inf[i][j] = '*';
                }
                else
                {
                    inf[i][j] = ' ';
                }
            }
            counter++;
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

