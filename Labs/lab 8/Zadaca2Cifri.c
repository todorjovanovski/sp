#include <stdio.h>

int pogolemi(int n, int k)
{
    int temp = n, modul = 1, modulP = 1, counter = 0, counterP = 0;
    while(temp)
    {
        counter++;
        if(temp%10>k)
        {
            counterP++;
        }
        temp /= 10;
    }
    for(int i=0; i<counter - 1; i++)
    {
        modul *= 10;
    }
    for(int i=0; i<counterP - 1; i++)
    {
        modulP *= 10;
    }
    if(n == 0)
    {
        return 0;
    }

    else if(n/modul > k)
    {
        if(counterP>1)
        {
            return n/modul * modulP + pogolemi(n%modul, k);
        }
        else
        {
            return n/modul + pogolemi(n%modul, k);
        }
    }
    return pogolemi(n%modul, k);

}

int sum(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return n%10 + sum(n/10);
}

int main()
{
    int k, n, broj;
    scanf("%d%d", &k, &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &broj);
        int num = pogolemi(broj, k);
        printf("%d : %d\n", num, sum(num));
    }

    return 0;
}
