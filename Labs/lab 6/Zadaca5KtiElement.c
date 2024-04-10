#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    while(n)
    {
        int size, niza[100], k;
        scanf("%d", &size);
        for(int i=0; i<size; i++)
        {
            scanf("%d", &niza[i]);
        }
        scanf("%d", &k);
        for(int i=0; i<size; i++)
        {
            if(i+k-1 < size)
            {
                int temp = niza[i+k-1];
                niza[i+k-1] = niza[i+k-2];
                niza[i+k-2] = temp;
                i = i+k-1;
            }

        }
        for(int i=0; i<size; i++)
        {
            printf("%d ", niza[i]);
        }
        printf("\n");
        n--;
    }

    return 0;
}
