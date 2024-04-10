#include <stdio.h>
#include <string.h>

int podstring(char * str1, char * str2)
{
    int d1 = strlen(str1);
    int d2 = strlen(str2);
    if(d1 > d2)
    {
        return 0;
    }
    for(int i=0; i < d2-d1; i++)
    {
        if(strncmp(str1, str2+i, d1) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    char niza1[100], niza2[100];
    gets(niza1);
    gets(niza2);
    if(podstring(niza1, niza2))
    {
        printf("%s e podstring na %s", niza1, niza2);
    }
    else
    {
        printf("%s NE e podstring na %s", niza1, niza2);
    }

    /*
    if(strstr(niza2, niza1))
    {
        printf("%s e podstring na %s", niza1, niza2);
    }
    else
    {
        printf("%s NE e podstring na %s", niza1, niza2);
    }
    */

    return 0;
}
