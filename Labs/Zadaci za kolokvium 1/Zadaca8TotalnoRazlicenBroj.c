#include <stdio.h>

int main()
{
    int n, x;
    scanf("%d %d", &n, &x);

    n--;
    for(;;n--)
    {
        int razlicen = 1;
        int tmpN = n;
        while(tmpN)
        {
            int tmpX = x;
            while(tmpX)
            {
                if(tmpN%10 == tmpX%10)
                {
                    razlicen = 0;
                }
                tmpX /= 10;
            }
            tmpN /= 10;
        }
        if(razlicen)
        {
            printf("%d", n);
            return 0;
        }
    }

    return 0;
}
