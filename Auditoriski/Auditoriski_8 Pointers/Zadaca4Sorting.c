#include <stdio.h>

int swap(int * a, int * b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int * a, int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; i<n; i++)
        {
            if(a[i] > a[j])
            {
                swap(&a[i], &a[j]);
            }
        }
    }
}

void selection_sort(int * a, int n, int m)
{
    if(n == m-1)
    {
        return;
    }
    else
    {
        int min = a[m];
        int min_i = m;
        for(int i=m; i<n; i++)
        {
            if(a[i] < min)
            {
                min = a[i];
                min_i = i;
            }
        }
        swap(&a[m], &a[min_i]);
        selection_sort(a, n, m+1);
    }
}

void print(int * a, int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
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

    selection_sort(niza, n, 0);

    print(niza, n);

    return 0;
}
