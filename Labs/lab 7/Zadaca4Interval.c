#include <stdio.h>
#include <math.h>

int obratenBroj(int broj)
{
    if(broj == 0)
    {
        return 0;
    }
    int temp = broj, counter = 0, modul = 1;
    while(temp)
    {
        counter++;
        temp /= 10;
    }
    for(int i=0; i<counter-1; i++)
    {
        modul *= 10;
    }

    return (broj%10 * modul + obratenBroj(broj/10));
}

int sumaCifri(int broj)
{
    if(broj == 0)
    {
        return 0;
    }

    return broj%10 + sumaCifri(broj/10);
}

void pecatiVoInterval(int a, int b)
{
    for(int i=a; i<=b; i++)
    {
        int zbir = i + obratenBroj(i);
        if(zbir % sumaCifri(zbir) == 0)
        {
            printf("%d\n", i);
        }
    }
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    pecatiVoInterval(a, b);

    return 0;
}
