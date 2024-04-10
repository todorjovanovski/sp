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


int main () {

    double niza [200];
    int i,n;

    scanf("%d", &n);

    for (i=0;i<n;i++) {
        scanf("%lf", &niza[i]);

    }

    printf("MAX -> %.3f\n", max(niza,n));
    printf("MIN -> %.3f\n", min(niza,n));

    normalize(niza,n);

     for (i=0;i<n;i++) {
        printf("%.3f ", niza[i]);
    }

    return 0;

}
