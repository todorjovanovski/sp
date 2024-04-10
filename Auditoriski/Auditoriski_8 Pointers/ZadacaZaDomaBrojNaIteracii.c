#include <stdio.h>

int linearno(int * a, int n, int vrednost)
{
    for(int i=0; i<n; i++)
    {
        if(a[i] == vrednost)
        {
            return i + 1;
        }
    }
    return -1;
}

int binarno(int * a, int n, int vrednost)
{
    int counter = 0;
    int start = 0;
    int end = n - 1;
    while(start <= end)
    {
        counter++;
        int mid = (start+end)/2;
        if(a[mid] == vrednost)
        {
            return counter;
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

int max(int * a, int n)
{
    int max = a[0];
    for(int i=1; i<n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
int main()
{
    int n, niza[100];
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &niza[i]);
    }

    srand(time(NULL));
    int key = rand() % max(niza, n) + 1;
    printf("Vrednost: %d\n", key);

    printf("Broj na iteracii linearno prebaruvanje: %d\n", linearno(niza, n, key));

    bubble_sort(niza, n);

    printf("Broj na interacii binarno prebaruvanje: %d", binarno(niza, n, key));

    return 0;
}
