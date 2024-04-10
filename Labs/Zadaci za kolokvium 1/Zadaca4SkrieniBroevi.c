#include <stdio.h>
#include <ctype.h>
int main()
{
    char c, pred2, pred1;
    int check = 2, sum = 0, broj, counter = 0;
    while(1)
    {
        broj = 0;
        scanf("%c", &c);
        if(c == '!')
        {
            break;
        }
        if(check)
        {
            check--;
        }
        else
        {
            if(counter == 2)
            {
                if(isdigit(pred2))
                {
                    broj = pred2-48;
                    sum += broj;
                }
            }
            if(isdigit(pred1) && isdigit(c))
            {
                broj = (pred1-48)*10 + (c-48);
                sum += broj;

            }
            else if(!isdigit(pred2) && isdigit(pred1) && !isdigit(c))
            {
                broj = pred1-48;
                sum += broj;
            }
        }
        pred2 = pred1;
        pred1 = c;
        counter++;
    }
    if(isdigit(pred1))
    {
        sum += (pred1-48);
    }
    printf("%d", sum);

    return 0;
}
