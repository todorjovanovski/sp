#include <stdio.h>

int main()
{
    int n, sum = 0, cifra1, cifra2;
    scanf("%d", &n);

    if(n >= 1000000 && n <= 9999999)
    {
        cifra1 = n/1000000;
        cifra2 = (n/100000)%10;
        sum = n%10 + (n%100)/10;
        if (cifra1 == 0 || cifra2 == 0 || sum == 0)
        {
            printf("Nevaliden broj");
        }
        else
        {
            if((n % cifra1 == 0 && n % sum !=0) || (n % cifra2 != 0 && n%sum != 0))
            {
                printf("DA");
            }
            else
            {
                printf("NE");
            }
        }
    }
    else
        printf("Vnesi sedumcifren broj");

    return 0;
}
