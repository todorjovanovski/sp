#include <stdio.h>
#include <math.h>

/*int triagolnik(int n, int counter)
{
    if(n == 0)
    {
        return 0;
    }
    return counter*pow(10, n-1) + triagolnik(n-1, counter+1);
}
*/

/*int triagolnik(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return n*pow(10, n-1) + triagolnik(n-1);
}
*/


/*int reverse(int n)
{
    int digits = (int)log10(n);
    if(n == 0)
    {
        return 0;
    }
    return (n%10)*pow(10, digits) + reverse(n/10);
}
*/

void func(int n, int i)
{
    if(n == i)
    {
        printf("%d", i);
        return;
    }
    else
    {
        printf("%d", i);
        func(n, i+1);
    }
}

void triagolnik(int n)
{
    if(n == 0)
    {
        return;
    }
    else
    {
        triagolnik(n-1);
        func(n, 1);
        printf("\n");
    }
}


int main()
{
    int n;
    scanf("%d", &n);

    triagolnik(n);

    return 0;
}
