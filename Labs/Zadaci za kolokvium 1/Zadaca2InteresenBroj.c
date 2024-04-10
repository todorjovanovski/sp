#include <stdio.h>

int main()
{
    int n, temp, digit, max;
    int counter, reverse, interesen, check = 0;
    scanf("%d", &n);

    if(n>9)
    {
        max = 1;
        for(int i=10; i<n; ++i)
        {
            counter = 0;
            reverse = 0;
            interesen = 0;
            temp = i;
            while(temp)
            {
                digit = temp%10;
                reverse = reverse*10 + digit;
                counter++;
                temp /= 10;
            }
            if(reverse%counter == 0 && i>max)
            {
                max = i;
                check++;
            }
        }
        if(check)
        {
            printf("%d", max);
        }
        else
        {
            printf("9");
        }

    }
    else
    {
        printf("Brojot ne e validen");
    }

    return 0;
}
