#include <stdio.h>

int main()
{
    float kwh, cena, ddv;
    scanf("%f", &kwh);

    if(kwh >0 && kwh <= 500)
    {
        cena = kwh*5;
    }
    else if(kwh > 500 && kwh <= 650)
    {
        cena =  500 * 5 + (kwh - 500)*7.5;
    }
    else if(kwh > 650 && kwh <= 850)
    {
        cena = 500 * 5 + 150*7.5 + (kwh - 650)*11;
    }
    else
    {
        cena = 500 * 5 + 150*7.5 + 200*11 +(kwh-850)*13.5;
    }

    if (cena < 7000)
    {
        ddv = cena*1.10;
    }
    else
    {
        ddv = cena*1.18;
    }

    printf("%.2f", ddv);

    return 0;
}
