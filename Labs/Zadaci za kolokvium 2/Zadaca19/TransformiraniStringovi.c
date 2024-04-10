#include <stdio.h>
#include <string.h>
#include <ctype.h>

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
                    int c = str[i] + x;
                    while(c > 122)
                    {
                        c -= 26;
                    }
                    str[i] = c;
                }
                else if(isupper(str[i])){
                    int c = str[i] + x;
                    while(c > 90)
                    {
                        c -= 26;
                    }
                    str[i] = c;
                }
            }
        }
        printf("%s", str);
        n--;
    }

    return 0;
}
