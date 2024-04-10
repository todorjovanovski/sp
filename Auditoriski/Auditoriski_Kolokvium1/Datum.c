#include <stdio.h>

int main()
{
    int today, n;
    scanf("%d", &today);

    int tDay = today / 1000000;
    int tMonth = (today / 10000)%100;
    int tYear = today % 10000;

    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        int date;
        scanf("%d", &date);
        int dDay = date / 1000000;
        int dMonth = (date / 10000)%100;
        int dYear = date%10000;
        if(tYear - dYear > 18)
        {
            printf("DA\n");
        }
        else if(tYear - dYear < 18)
        {
            printf("NE\n");
        }
        else
        {
            if(tMonth>dMonth)
            {
                printf("DA\n");
            }
            else if(tMonth<dMonth)
            {
                printf("NE\n");
            }
            else
            {
                if(tDay>=dDay)
                {
                    printf("DA\n");
                }
                else
                {
                    printf("NE\n");
                }
            }
        }
    }
    return 0;
}
