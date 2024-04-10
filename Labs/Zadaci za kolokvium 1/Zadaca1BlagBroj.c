#include <stdio.h>

int main()
{
    int n, m, digit, min, temp, blag, counter = 0;
    scanf("%d %d", &n, &m);

    min = m+1;
    for(int i=n; i<=m; ++i)
    {
        blag = 1;
        temp = i;
        while(temp)
        {
            digit = temp%10;
            if(digit%2 != 0)
            {
                blag = 0;
            }
            temp /= 10;
        }
        if(blag == 1 && i < min)
        {
            min = i;
            ++counter;
        }
    }
    if(counter)
    {
        printf("%d", min);
    }
    else
    {
        printf("NE");
    }

    return 0;
}
