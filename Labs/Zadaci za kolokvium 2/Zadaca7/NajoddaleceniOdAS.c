#include <stdio.h>
#include <math.h>

int main()
{
    int r, c, matrica[100][100], sum = 0, max, niza[100];
    float as, sredina[100], max_razlika;
    scanf("%d%d", &r, &c);

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d", &matrica[i][j]);
        }
    }

    for(int i=0; i<r; i++)
    {
        sum = 0;
        for(int j=0; j<c; j++)
        {
            sum += matrica[i][j];
        }
        as = (float)sum/c;
        sredina[i] = as;
    }

    for(int i=0; i<r; i++)
    {
        int first = 1;
        //printf("%.2f\n", sredina[i]);
        for(int j=0; j<c; j++)
        {
            float razlika = matrica[i][j] - sredina[i];
            if(razlika < 0)
            {
                razlika = -razlika;
            }
            //printf("%.2f ", razlika);
            if(first == 1)
            {
                first = 0;
                max = matrica[i][j];
                max_razlika = razlika;
            }
            else
            {
                if(razlika > max_razlika)
                {
                    max_razlika = razlika;
                    max = matrica[i][j];
                }
            }
        }
        //printf("\n");
        niza[i] = max;
    }

    for(int i=0; i<r; i++)
    {
        printf("%d ", niza[i]);
    }

    return 0;
}
