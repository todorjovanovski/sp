#include <stdio.h>

int main()
{
    int n, m, counter = 0;
    scanf("%d %d", &n, &m);
    for(int i=n; i<=m; i++)
    {
        int temp = i, reverse = 0;
        while(temp)
        {
            reverse = reverse*10 + temp%10;
            temp /= 10;
        }
        if(i + reverse <= 2*i)
        {
            printf("%d\n", i);
            counter++;
        }
    }
    printf("Vkupno: %d", counter);
}
