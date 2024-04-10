#include <stdio.h>

int main()
{
    int n, max1, max2, temp;

    if(scanf("%d %d", &max1, &max2) == 2)
    {
        if(max2>max1)
        {
            temp = max1;
            max1 = max2;
            max2 = temp;
        }
        while(scanf("%d", &n))
        {
            if(n > max1)
            {
                max2 = max1;
                max1 = n;
            }
            else if(n > max2)
            {
                max2 = n;
            }
        }
        printf("\nMax1: %d\nMax2: %d", max1, max2);
    }
    else
    {
        printf("Vnesi barem dva broja!\n");
    }

    return 0;
}
