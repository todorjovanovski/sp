#include <stdio.h>

int factoriel(int sum)
{
    if(sum == 1)
    {
        return 1;
    }
    return sum * factoriel(sum - 1);
}

int sum(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return n + sum(n - 1);
}

int main()
{
    int n, i, ans = 0;
    scanf("%d", &n);

    for(i=1; i<n; i++)
    {
        ans += factoriel(sum(i));
        printf("%d! + ", sum(i));
    }
    ans += factoriel(sum(i));
    printf("%d! = %d", sum(i), ans);

    return 0;
}
