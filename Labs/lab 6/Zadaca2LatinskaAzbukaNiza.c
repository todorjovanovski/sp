#include <stdio.h>

int main()
{
    char c, niza[26];
    int k;

    scanf("%c %d", &c, &k);

    for(int i=0; i<26; i++)
    {
        niza[i] = i + 65;
    }

    for (i = 0; i < 26; i++)
    {
        if (k <= 26)
        {
            if (26-i < k && niza[i]==c)
            {
                printf("%c", niza[(k - (26-i))]);
            }
            else if (niza[i] == c)
            {
                printf("%c", niza[i+(k%26)]);
            }
        }
        else
        {
            if (niza[i] == c)
            {
                printf("%c", niza[(k%26)-(26-i)]);
            }
        }

    }
    return 0;

}
