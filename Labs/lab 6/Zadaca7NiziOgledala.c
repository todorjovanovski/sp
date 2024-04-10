#include <stdio.h>

int main()
{
    int m;
    scanf("%d", &m);

    while(m)
    {
        int n, niza[100], counter = 0;
        scanf("%d", &n);
        for(int i=0; i<n; i++)
        {
            scanf("%d", &niza[i]);
        }

        for(int i=0, j=n-1; i<n, j>=0; i++, j--)
        {
            if (niza[i] == niza[j])
            {
                counter++;
            }
        }
        float p = (1.0/n)*counter*100;
        printf("%.2f%% ", p);
        m--;
    }

    return 0;
}
