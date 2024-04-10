#include <stdio.h>

int main()
{
    int n, counter = 0, sl = 0, sum = 0;

    while(1)
    {
        scanf("%d", &n);
        if(n < 1 || n > 90)
        {
            break;
        }
        if(counter<7)
        {
            sl = sl*10+n%10;
        }
        else
        {
            sum += n;
        }
        counter++;
    }
    printf("%d", sl + sum);

    return 0;
}
