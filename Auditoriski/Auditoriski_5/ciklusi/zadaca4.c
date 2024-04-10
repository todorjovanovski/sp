#include <stdio.h>

int main()
{
    int i, sum, najznacajna, cifra, n;
    i = 1000;
    while (i <= 9999)
    {
        najznacajna = i/1000;
        n = i%1000;
        sum = 0;
        while(n>0)
        {
            cifra = n % 10;
            sum += cifra;
            n /= 10;
        }
        if(sum == najznacajna)
        {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}
