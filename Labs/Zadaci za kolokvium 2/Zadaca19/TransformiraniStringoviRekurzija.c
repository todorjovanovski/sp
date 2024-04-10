#include <stdio.h>
#include <string.h>
#include <ctype.h>

int rec(int c, int x)
{
    if(x == 0)
    {
        return c;
    }
    if(c+x > 122)
    {
        return rec(c+1-26, x-1);
    }
    else{
        return rec(c+1, x-1);
    }

}

int rec1(int c, int x)
{
    if(x == 0)
    {
        return c;
    }
    if(c+x > 90)
    {
        return rec1(c+1-26, x-1);
    }
    else{
        return rec1(c+1, x-1);
    }
}

int main()
{
    int n, x;
    char empty;
    scanf("%d%d%c", &n, &x, &empty);

    while(n)
    {
        char str[81];
        fgets(str, sizeof(str), stdin);
        int i;
        for(i=0; i<strlen(str)-1; i++)
        {
            if(isalpha(str[i]))
            {
                if(islower(str[i]))
                {
                    str[i] = rec(str[i], x);
                }
                else if(isupper(str[i]))
                {
                    str[i] = rec1(str[i], x);
                }
            }
        }
        printf("%s", str);
        n--;
    }

    return 0;
}
