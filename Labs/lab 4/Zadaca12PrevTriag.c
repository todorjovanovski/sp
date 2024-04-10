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
                if(j == 0 || i == 0 || i+j <= n-1)
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

/*  00 01 02 03 04 05
    10 11 12 13 14 15
    20 21 22 23 24 25
    30 31 32 33 24 35
    40 41 42 43 44 45
    50 51 52 53 54 55
*/
    return 0;


}

