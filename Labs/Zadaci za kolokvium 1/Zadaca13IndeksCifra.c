#include <stdio.h>

int main()
{
    int n, indeks, gr1[500], gr2[500], gr3[500];
    int g1 = 0, g2 = 0, g3 = 0;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &indeks);
        int digit = indeks%10;
        if(digit >= 0 && digit <=2)
        {
            gr1[g1] = indeks;
            g1++;
        }
        else if(digit >=3 && digit <=5)
        {
            gr2[g2] = indeks;
            g2++;
        }
        else if(digit >= 6 && digit <=9)
        {
            gr3[g3] = indeks;
            g3++;
        }
    }

    printf("Grupa 1\n");
    for(int i=0; i<g1; i++)
    {
        printf("%d ", gr1[i]);
    }
    printf("\nGrupa 2\n");
    for(int i=0; i<g2; i++)
    {
        printf("%d ", gr2[i]);
    }
    printf("\nGrupa 3\n");
    for(int i=0; i<g3; i++)
    {
        printf("%d ", gr3[i]);
    }

    return 0;

}

