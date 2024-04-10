#include <stdio.h>

int main()
{

    int d, m, g;
    int flag = 0;
    scanf("%d%d%d", &d, &m, &g);

    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
        if (d >= 0 && d <= 31)
        {
            flag = 1;
        }
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11 || m == 10 || m == 12)
    {
        if(d >= 0 && d <= 30)
        {
            flag = 1;
        }
    }
    else if(m == 2)
    {
        if((d >= 0 && d <= 28) || (d == 29 && (g % 400 == 0 || g % 4 == 0 && g % 100 != 0)))
        {
            flag = 1;
        }
    }

    if(flag)
    {
        printf("DA");
    }
    else
    {
        printf("NE");
    }

    return 0;
}
