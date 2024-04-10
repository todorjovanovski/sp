#include <stdio.h>

int main()
{
    int n, m, matrica[100][100], sum = 0, count = 0;
    scanf("%d%d", &n, &m);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d", &matrica[i][j]);
        }
    }

    for(int i=0; i<n; i++)
    {
        if(count >= 3)
        {
            sum++;
        }
        count = 0;
        for(int j=0; j<m; j++)
        {
            if(matrica[i][j] == 1)
            {
                count++;
            }
            else
            {
                if(count >= 3)
                {
                    sum++;
                    j = m;
                }
                count = 0;
            }
        }
    }
    if(count >= 3)
    {
        sum++;
    }

    count = 0;
    for(int i=0; i<m; i++)
    {
        if(count >= 3)
        {
            sum++;
        }
        count = 0;
        for(int j=0; j<n; j++)
        {
            if(matrica[j][i] == 1)
            {
                count++;
            }
            else
            {
                if(count >= 3)
                {
                    sum++;
                    j = n;
                }
                count = 0;
            }
        }
    }
    if(count >= 3)
    {
        sum++;
    }

    printf("%d", sum);

    return 0;
}
