#include <stdio.h>

int main()
{
    int ocena, sum;
    float avg;

    printf("Vnesi oceni od ovoj semestar:\n");

    for(int i=0; i<5; i++)
    {
        scanf("%d", &ocena);
        sum += ocena;
    }
    avg = sum/5.0;

    printf("Prosek: %.2f", avg);

    return 0;

}
