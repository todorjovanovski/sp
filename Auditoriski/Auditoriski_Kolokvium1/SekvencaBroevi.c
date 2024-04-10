#include <stdio.h>

int main()
{
    int m, num, pred, first = 1, digit, pred_digit, counter = 1;
    scanf("%d", &m);

    while(scanf("%d", &num))
    {
        digit = 0;
        int temp = num;
        while(temp)
        {
            temp /= 10;
            digit++;
        }
        if(first == 1)
        {
            first = 0;
        }
        else
        {
            if(num > pred && digit == m && pred_digit == m)
            {
                counter++;
            }
            else
                {
                    if(counter >= 2)
                    {
                        printf("%d ", counter);
                    }
                    counter = 1;
                }
        }
        pred = num;
        pred_digit = digit;
    }

    if(counter >= 2)
    {
        printf("%d ", counter);
    }

    return 0;
}
