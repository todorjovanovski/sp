#include <stdio.h>

int main()
{
    int n, maxCounter, counter0 = 0, counter1 = 0, counter2 = 0, counter3 = 0, counter4 = 0;

    while(scanf("%d", &n))
    {
        int maxDigit = 0;
        int temp = n;
        int counter = 0;
        while(temp)
        {
            int digit = temp%10;
            if(digit > maxDigit)
            {
                maxDigit = digit;
                maxCounter = counter;
            }
            counter++;
            temp /= 10;
        }
        if(maxCounter == 0)
        {
            counter0++;
        }
        else if(maxCounter == 1)
        {
            counter1++;
        }
        else if(maxCounter == 2)
        {
            counter2++;
        }
        else if(maxCounter == 3)
        {
            counter3++;
        }
        else if(maxCounter == 4)
        {
            counter4++;
        }
    }
    printf("0: %d\n1: %d\n2: %d\n3: %d\n4: %d", counter0, counter1, counter2, counter3, counter4);

    return 0;
}
