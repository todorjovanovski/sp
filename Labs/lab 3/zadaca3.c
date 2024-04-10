#include <stdio.h>

int main()
{
    int n, temp, counter = 0, counterC = 0, cifra, kolega = 0, modul = 1;
    float procent;
    scanf("%d", &n);

    if (n<10000)
    {
        temp = n;
        while(temp>0)
        {
            counterC++;
            cifra = temp%10;
            if(cifra == 5)
            {
                counter++;
            }
            temp = temp/10;
        }
        for (int i=0; i<counterC-1; i++)
        {
            modul *= 10;
        }
        if(counter >= 2)
        {
            temp = n;
            while(counterC>0)
            {
                cifra = (temp/modul)%10;
                if (cifra == 5)
                {
                    kolega = kolega*10 + 6;
                }
                else
                {
                    kolega = kolega*10 + cifra;
                }
                modul = modul/10;
                counterC--;
            }
            if (n<kolega)
            {
                procent = (100.0/n)*kolega - 100;
            }
            else
            {
                procent = (100.0/kolega)*n - 100;
            }
            printf("%.4f%%", procent);
        }
        else
            printf("Error");
    }
    else
        printf("Error");


    return 0;
}
