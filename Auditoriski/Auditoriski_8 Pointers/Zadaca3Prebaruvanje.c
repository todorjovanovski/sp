#include <stdio.h>

int linearno(int * a, int n, int vrednost)
{
    for(int i=0; i<n; i++)
    {
        if(a[i] == vrednost)
        {
            return i;
        }
    }
    return -1;
}

int binarno(int * a, int n, int vrednost)
{
    int start = 0;
    int end = n - 1;
    while(start <= end)
    {
        int mid = (start+end)/2;
        if(a[mid] == vrednost)
        {
            return mid;
        }
        else if(a[mid] > vrednost)
        {
            end = mid - 1;
        }
        else
        {
            start = start + 1;
        }
    }
    return -1;
}

void bubble_sort(int * a, int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main()
{
    int n, niza[100];
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &niza[i]);
    }

    int vrednost;
    scanf("%d", &vrednost);

    bubble_sort(niza, n);

    for(int i=0; i<n; i++)
    {
        printf("%d ", niza[i]);
    }

    printf("\nBinarno prebaruvanje: %d", binarno(niza, n, vrednost));

    return 0;
}
