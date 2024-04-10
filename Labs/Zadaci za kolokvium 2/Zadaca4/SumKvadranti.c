#include <stdio.h>

int main()
{
    int n, m, matrica[100][100], x, y;
    scanf("%d%d", &n, &m);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d", &matrica[i][j]);
        }
    }
    scanf("%d%d", &x, &y);

    int kv1 = 0, kv2 = 0, kv3 = 0, kv4 = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(i >= x && j >= y)
            {
                kv4 += matrica[i][j];
            }
            if(i < x && j >= y)
            {
                kv1 += matrica[i][j];
            }
            if(i < x && j < y)
            {
                kv2 += matrica[i][j];
            }
            if(i >= x && j < y)
            {
                kv3 += matrica[i][j];
            }
        }
    }
    printf("%d %d %d %d", kv1, kv2, kv3, kv4);

    /*  00 01 02
        10 11 12
    */
    return 0;
}
