#include <stdio.h>

int main()
{
    int n, m, matrica[100][100];
    scanf("%d%d", &n, &m);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d", &matrica[i][j]);
        }
    }

    int nova[100][100];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            int counter = 0;
            if(matrica[i][j] == 0)
            {
                for(int x = i-1; x<= i+1; x++)
                {
                    for(int y = j-1; y<= j+1; y++)
                        {
                            if(matrica[x][y] == 1)
                            {
                                counter++;
                            }
                        }
                }
                nova[i][j] = counter;
            }
            else if(matrica[i][j] == 1)
            {
                nova[i][j] = 42;
            }

        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(nova[i][j] == 42)
            {
                printf("%c ", nova[i][j]);
            }
            else
            {
                printf("%d ", nova[i][j]);
            }
        }
        printf("\n");
    }

    return 0;

}
