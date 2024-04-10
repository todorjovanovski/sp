#include <stdio.h>

int main()
{
    int n, poeni, padnati = 0, polozeni = 0, sumpadnati = 0, sumpolozeni = 0, nizapolozeni[100], nizapadnati[100];

    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &poeni);
        if(poeni >= 50 && poeni <= 100)
        {
            nizapolozeni[polozeni] = poeni;
            polozeni++;
            sumpolozeni += poeni;
        }
        else if(poeni >= 0 && poeni < 50)
        {
            nizapadnati[padnati] = poeni;
            padnati++;
            sumpadnati += poeni;
        }
    }
    printf("Sredna vrednost na padnati %.2f\n", (float)sumpadnati/padnati);
    for(int i=0; i<padnati; i++)
    {
        printf("%d ", nizapadnati[i]);
    }
    printf("\nSredna vrednost na polozeni %.2f\n", (float)sumpolozeni/polozeni);
    for(int i=0; i<polozeni; i++)
    {
        printf("%d ", nizapolozeni[i]);
    }

    return 0;

}
