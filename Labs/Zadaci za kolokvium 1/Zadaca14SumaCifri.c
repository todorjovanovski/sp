#include <stdio.h>

int main()
{
    int n, counter = 0, first = 1, digit, predMax, num[100], sumN[100];

    while(scanf("%d", &n))
    {
        int sum = 0, maxDigit = 0, temp = n;
        if(first == 1)
        {
            first = 0;
            while(temp)
            {
                digit = temp%10;
                if(digit > maxDigit)
                {
                    maxDigit = digit;
                }
                sum += digit;
                temp /= 10;
            }
        }
        else
        {
            while(temp)
            {
                digit = temp%10;
                if(digit > maxDigit)
                {
                    maxDigit = digit;
                }
                sum += digit;
                temp /= 10;
            }
            sum += predMax;
        }
        predMax = maxDigit;
        num[counter] = n;
        sumN[counter] = sum;
        counter++;
    }
    for(int i=0; i<counter; i++)
    {
        printf("%d: %d\n", num[i], sumN[i]);
    }

    return 0;
}
