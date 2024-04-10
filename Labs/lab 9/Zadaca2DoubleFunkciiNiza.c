#include<stdio.h>

double max(double *niza, int n)
{
    double _max = niza[0];
    for(int i=1; i<n; i++)
    {
        if(niza[i] > _max)
        {
            _max = niza[i];
        }
    }
    return _max;
}

double min(double * niza, int n)
{
    double _min = niza[0];
    for(int i=1; i<n; i++)
    {
        if(niza[i] < _min)
        {
            _min = niza[i];
        }
    }
    return _min;
}

void normalize(double * niza, int n)
{
    for(int i=0; i<n; i++)
    {
        *(niza+i) = (*(niza+i) - min(niza, n)) / (max(niza, n) - min(niza, n));
    }
}

void sort(double * niza, int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(*(niza+i)<*(niza+j))
            {
                double temp = *(niza+i);
                *(niza+i) = *(niza+j);
                *(niza+j) = temp;
            }
        }
    }
}

int main () {

    double niza [200];
    int i,n;

    scanf("%d", &n);

    for (i=0;i<n;i++) {
        scanf("%lf", &niza[i]);

    }

    printf("MAX -> %.3lf\n", max(niza,n));
    printf("MIN -> %.3lf\n", min(niza,n));

    normalize(niza,n);
    sort(niza,n);

     for (i=0;i<n;i++) {
        printf("%.3lf ", niza[i]);

    }

    return 0;

}
