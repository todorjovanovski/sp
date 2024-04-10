#include <stdio.h>

int main()
{
    char c;
    int sum = 0;
    while(1)
    {
        scanf("%c", &c);

        if(c == '.')
        {
            break;
        }
        else
        {
            if(c >= 'A' && c <= 'F')
            {
                sum += (c-'A') + 10;
            }
            else if(c >= 'a' && c <= 'f')
            {
                sum += (c-'a') + 10;
            }
            else if(c >= '0' && c <= '9')
            {
                sum += (c-'0');
            }
        }
    }
    if(sum%16 == 0)
    {
        if (sum%100 == 16)
        {
            printf("Poln pogodok");
            return 0;
        }
        printf("Pogodok");
    }
    else
    {
        printf("%d", sum);
    }

    return 0;
}
