#include <stdio.h>

int main()
{
    int n, digit, pred2, pred1, cikcak[100], counter = 0, cc;

    while(scanf("%d", &n))
    {
        if(n>=10)
        {
            if(n>=100)
            {
                int check = 2;
                int temp = n;
                while(temp)
                {
                    digit = temp%10;
                    if(check)
                    {
                        check--;
                    }
                    else
                    {
                        if(pred2 > pred1 && digit > pred1 || pred2 < pred1 && digit < pred1)
                        {
                            cc = 1;
                        }
                        else
                        {
                            cc = 0;
                            break;
                        }
                    }
                    pred2 = pred1;
                    pred1 = digit;
                    temp /= 10;
                }
            }
            else
            {
                if(n%10 == n/10)
                {
                    cc=0;
                }
                else
                {
                    cc=1;
                }
            }
            if(cc)
            {
                cikcak[counter] = n;
                counter++;
            }
        }
    }
    for(int i=0; i<counter; i++)
    {
        printf("%d\n", cikcak[i]);
    }
    return 0;
}
