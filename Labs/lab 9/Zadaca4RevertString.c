#include <stdio.h>
#include <string.h>
#include <ctype.h>


void _reverse(char * c)
{
    int end = strlen(c) - 1;
    for(int i=0; i < strlen(c)/2; i++)
    {
        char temp = c[i];
        c[i] = c[end];
        c[end] = temp;
        end--;
    }
}

void revertString(char * a, char * b, char * comparator)
{
    _reverse(a);
    _reverse(b);

    for(int i=0; i<strlen(comparator); i++)
    {
        comparator[i] = tolower(comparator[i]);
    }

    int d1 = strlen(a), flagA = 0;
    int d2 = strlen(b), flagB = 0;
    int min;
    if(d1 >= d2)
    {
        min = d2;
    }
    else
    {
        min = d1;
    }

    for(int i=0; i<min; i++)
    {
        if(tolower(a[i]) > tolower(b[i]))
        {
            flagA = 1;
        }
        else if(tolower(a[i]) < tolower(b[i]))
        {
            flagB = 1;
        }
        if(flagA || flagB)
        {
            break;
        }
    }

    if(strcmp(comparator, "pogolem") == 0)
    {
        if(flagA)
        {
            puts(a);
        }
        else if(flagB)
        {
            puts(b);
        }
    }
    else if(strcmp(comparator, "pomal") == 0)
    {
        if(flagA == 0)
        {
            puts(a);
        }
        else if(flagB == 0)
        {
            puts(b);
        }
    }
    else
    {
        printf("Invalid comparator\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        char c1[1000], c2[1000], c3[1000];
        scanf("%s%s%s", c1, c2, c3);
        revertString(c1, c2, c3);
    }

    return 0;
}
