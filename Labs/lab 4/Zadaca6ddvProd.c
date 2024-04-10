#include <stdio.h>

int main()
{
    int m, n;
    int maxAmount = 0;
    float maxTax = 0;

    scanf("%d", &m);
    while(m)
    {
        float sum = 0;
        int sumP = 0;
        scanf("%d", &n);

        for(int i=0; i<n; i++)
        {
            int iznos;
            char danok;
            scanf("%d %c", &iznos, &danok);
            if(danok == 'A')
            {
                sum += iznos*0.18;
            }
            else if(danok == 'B')
            {
                sum += iznos*0.05;
            }
            sumP += iznos;
        }
        float tax = sum*0.15;
        if(sumP<=30000)
        {
            printf("Total tax return is: %.2f\n", tax);
            if(tax > maxTax)
            {
                maxTax = tax;
            }
            if(sumP > maxAmount)
            {
                maxAmount = sumP;
            }
        }
        else
        {
            printf("Sum %d is bigger than 30000\n", sumP);
        }
        m--;
    }
    printf("Max amount of reciept: %d. Max tax return for reciepts: %.2f", maxAmount, maxTax);


    return 0;
}
