#include <stdio.h>

int main()
{
    int broj;
    while(scanf("%d", &broj))
    {
        int max = 0, first = 1;
        int temp = broj;
        while(temp)
        {
            int digit = temp%10;
            if(digit>max)
            {
                max = digit;
            }
            temp /= 10;
        }
        printf("%d\n", max);
    }

    return 0;
}
