#include <stdio.h>

int main()
{
    int a, b, counter = 0;
    scanf("%d %d", &a, &b);

    for(int i=a; i<=b; i++)
    {
        int sum = 0;
        int temp = i;
        while(temp)
        {
            if((temp%10)%2 == 0)
            {
                sum += temp%10;
            }
            temp /= 10;
        }
        if(sum>0 && sum%4 == 0)
        {
            printf("%d\n", i);
            counter++;
        }
    }
    printf("Vkupno: %d", counter);

    return 0;
}
