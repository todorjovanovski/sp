#include <stdio.h>

int main()
{
    int n, m, digits;

    scanf("%d %d", &n, &m);

    int tempN = n;
    while(tempN)
    {
        digits = 0;
        int tempM = m;
        while(tempM)
        {
            if(tempN%10 == tempM%10)
            {
                digits = 1;
                break;
            }
            tempM /= 10;
        }
        if(digits == 0)
        {
            printf("NE");
            return 0;
        }
        tempN /= 10;
    }
    if(digits)
    {
        printf("DA");
    }

    return 0;
}
