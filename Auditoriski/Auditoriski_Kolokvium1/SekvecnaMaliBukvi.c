#include <stdio.h>
#include <math.h>

int main()
{
    char c, pred, start, finish;
    int first = 1, n = 0, i;

    while(1)
    {
        scanf("%c", &c);
        if(!islower(c))
        {
            break;
        }
        if(first == 1)
        {
            first = 0;
        }
        else
        {
            if(abs(c - pred) != 1)
            {
                if(pred < c)
                {
                    start = pred + 1;
                    finish = c - 1;
                }
                else if(pred > c)
                {
                    start = c + 1;
                    finish = pred - 1;
                }
                for(i = 0; start <= finish; start++, i++)
                {
                    printf("%c", start);
                }
                printf(" %d\n", i);
                n++;
            }
        }
        pred = c;

    }
    printf("%d", n);

    return 0;
}
