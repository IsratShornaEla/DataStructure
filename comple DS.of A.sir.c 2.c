#include<stdio.h>
#include<stdlib.h>
int main()
{
    float *p,n;
    int i;
    scanf("%f",&n);
    p=(float*)malloc(n*sizeof(float));
    for(i=0;i<n;i++)
    {
        scanf("%f",&p[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%f  ",p[i]);
    }
    return 0;
}

