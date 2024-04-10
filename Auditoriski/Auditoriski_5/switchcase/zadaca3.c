#include <stdio.h>

int main()
{
    int ocena, suma = 0, broceni = 0, padnal = 0;
    while (scanf("%d", &ocena))
    {
        while (ocena < 5 || ocena > 10)
        {
            printf("Vnesi ocena od 5 do 10:\n");
            if (scanf("%d", &ocena) != 1)
                break;
        }
        if (ocena >= 6 && ocena <= 10)
        {
            suma += ocena;
            broceni++;
        }
        else
            padnal++;
    }
    if (broceni == 0)
    {
        printf("Nema polozeno nieden ispit\n.");
    }
    else
    {
        printf("Prosekot e: %.2f\n", (float)suma/broceni);
    }
    if (padnal != 0)
    {
        printf("Padnal na %d ispiti", padnal);
    }
    else
    {
        printf("Ne padnal na nieden ispit.");
    }

    return 0;
}
