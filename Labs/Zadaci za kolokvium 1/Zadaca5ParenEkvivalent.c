#include <stdio.h>

int main()
{
    int n, m, max, min, counter = 0, paren = 0, digit, modul = 1;
    scanf("%d %d", &n, &m);

    if(n <= 0 || m <=0)
    {
        printf("Invalid input");
    }
    else
    {
        if(n>m)
        {
            max = n;
            min = m;
        }
        else if(m>n)
        {
            max = m;
            min = n;
        }
        int temp = max;
        while(temp)
        {
            counter++;
            temp /= 10;
        }
        for(int i=0; i<counter-1; i++)
        {
            modul *= 10;
        }
        while(counter)
        {
            digit = (max/modul)%10;
            if(counter % 2 == 0)
            {
                paren = paren*10 + digit;
            }
            modul /= 10;
            counter--;
        }
        if(paren == min)
        {
            printf("PAREN");
        }
        else
        {
            printf("NE");
        }
    }

    return 0;
}
