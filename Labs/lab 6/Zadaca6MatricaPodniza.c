#include <stdio.h>

int main()
{
    int n, matrica[100][100], max = 0, niza[100];
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &matrica[i][j]);
        }
    }

    for(int i=0; i<n; i++)
    {
        int counter = 1;
        for(int j=0; j<n; j++)
        {
            if(matrica[i][j] < matrica[i][j+1])
            {
                counter++;
            }
            else
            {
                if(counter>max)
                {
                    max = counter;
                }
            }
        }
    }
    printf("%d", max);


    return 0;
}
