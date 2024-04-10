#include <stdio.h>
#include <math.h>

int main()
{
    int n, max = 0, razlika;
    scanf("%d", &n);

    int niza[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &niza[i]);
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            razlika = abs(niza[i] - niza[j]);
            if(razlika > max)
            {
                max = razlika;
            }
        }
    }
    printf("Najgolema razlika: %d", max);

    return 0;
}
