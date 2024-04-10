#include <stdio.h>
#include <math.h>
int poramnet(int a)
{
    int digits=(int)log10(a);
    int modul = pow(10,digits);
    if(a < 10)
    {
        return a;
    }
    if(a/modul == 9)
    {
        return 7 * modul + poramnet(a % modul);
    }
    else{
        return (a/modul) * modul + poramnet(a % modul);
    }

}

int main()
{
    int broj;
    scanf("%d", &broj);
    printf("%d", poramnet(broj));

}
