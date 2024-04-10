#include <stdio.h>

int main()
{
    int m, n, matrica[100][100], raz[100];
    scanf("%d%d", &m, &n);

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &matrica[i][j]);
        }
    }

    for(int i=0; i<m; i++)
    {
        int razlika = 0, sum1 = 0, sum2 = 0;
        for(int j=0; j<n; j++)
        {
            if(n%2 == 0)
            {
                if(j < n/2)
                {
                    sum1 += matrica[i][j];
                }
                else{
                    sum2 += matrica[i][j];
                }
            }
            else{
                if(j <= n/2)
                {
                    sum1 += matrica[i][j];
                }
                if(j >= n/2){
                    sum2 += matrica[i][j];
                }
            }
        }
        razlika = sum1 - sum2;
        if(razlika < 0)
        {
            razlika *= -1;
        }
        //printf("%d ", razlika);
        raz[i] = razlika;
    }
    //printf("\n");
    for(int i=0; i<m; i++)
    {
        if(n%2 == 0)
        {
            matrica[i][n/2 - 1] = raz[i];
            matrica[i][n/2] = raz[i];
        }
        else{
            matrica[i][n/2] = raz[i];
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
