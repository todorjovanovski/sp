#include <stdio.h>

int main()
{
    int indeks, ocena, sum;
    float avg;

    printf("Vnesi broj na indeks: ");
    scanf("%d", &indeks);

    printf("Vnesi oceni od posledniot semestar:\n");
    for (int i=0; i<6; i++)
    {
        scanf("%d", &ocena);
        sum += ocena;
    }
    avg = sum/6.0;

    int godina = indeks / 10000;
    int count = 0;
    for (int i = 19; i>=14; --i)
    {
        if(godina != i+1)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    printf("Posek: %.2f\n", avg);
    printf("Student: %d\n", indeks);
    printf("%d godina\n", count);
    printf("Nagraden: %d\n", avg >= 9.5);

    return 0;

}
