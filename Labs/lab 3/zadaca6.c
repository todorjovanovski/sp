#include <stdio.h>

int main()
{
    int n, palindrom = 0, cifra;
    scanf("%d", &n);

    if(n>=10000 && n<=99999)
    {
        int temp = n;
        while(temp>0)
        {
            cifra = temp%10;
            palindrom = palindrom*10 + cifra;
            temp = temp/10;
        }
        if(n == palindrom)
        {
            printf("Palindrom");
        }
        else
        {
            printf("Ne e palindrom.");
        }
    }
    else
        printf("Nevaliden vlez");

    return 0;

}
