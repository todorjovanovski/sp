#include <stdio.h>

int MAX(int n, int max, int counter)
{
    if(counter == 0)
    {
        return max;
    }
    return MAX(n, (n>max) ? n : max, counter-1);
}

int main()
{
    int n, niza[100];
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &niza[i]);
    }

    int max_element = niza[0];
    for(int i=1; i<n; i++)
    {
        max_element = MAX(niza[i], max_element, 1);
    }
    printf("MAX: %d", max_element);

    return 0;
}
