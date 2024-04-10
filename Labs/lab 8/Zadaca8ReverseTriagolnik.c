#include <stdio.h>
#include <math.h>

int triagolnik(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return n*pow(10, n-1) + triagolnik(n-1);
}

int reverse(int n)
{
    int digits = (int)log10(n);
    if(n < 10)
    {
        return n%10;
    }
    printf("%d ", n%10);
    return reverse(n/10);
}

int broj(int n)
{

}

int main()
{
    int n;
    scanf("%d", &n);

    while(n)
    {
        printf("%d", reverse(triagolnik(n)));
        printf("\n");
        n--;
    }



    return 0;
}
