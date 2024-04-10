#include <stdio.h>

int main()
{
    int mb, username, den, mesec, godina;

    scanf("%d", &mb);

    den=mb/100000;
    mesec=(mb/1000)%100;
    godina=mb%1000 + 1000;

    username = den*100 + mesec*1000 + godina;

    if(username >= 10000 && username <= 99999)
    {
        printf("%d", username);
    }
    else
    {
        if(godina > 1980)
        {
            username += 90000;

        }
        else if(godina > 1960)
        {
            username += 80000;
        }
        else
        {
            username += 70000;
        }

        printf("%d", username);
    }

    return 0;
}
