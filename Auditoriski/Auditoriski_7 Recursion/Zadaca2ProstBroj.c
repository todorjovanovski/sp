#include <stdio.h>

int prime_v1(int n, int i)
{
    if(n % i == 0)
    {
        return 0;
    }
    if(i == n/2)
    {
        return 1;
    }
    return prime_v1(n, i + 1);
}

int prime_v2(int n, int i)
{
    if(n < 4)
        return 1;
    else if(n % i == 0)
        return 0;
    else if(i*2 > n)
        return 1;
    else return prime_v2(n, i+1);
}

int find(int n)
{
    if(prime_v2(n+1, 2))
    {
        return n+1;
    }
    return find(n+1);
}

int main()
{
    int n, razlika;
    scanf("%d", &n);
    razlika = find(n) - n;
    printf("%d - %d = %d", find(n), n, razlika);

    return 0;
}
