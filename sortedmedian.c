Mission-r-n-d
=============

2k14 mission r&amp;d classes
#include<stdio.h>
float find_median(int *a,int *b,int m,int n)
{
    int i=0;
    int j=0;
    int size=m+n;
    size/=2;
    int prev=-1;//previous
    int cur=-1;//current
    while(i+j<=size)
    {
        prev=cur;
        if(a[i]<b[j])
        {
            cur=a[i];
            i++;
        }
        else
        {
            cur=b[j];
           j++;
         }
    }
    if((m+n)%2==0)
    {
        return (prev+cur)/2.0;
    }
    else
    {
        return cur;
    }
}
int main()
{
    int m,n;
    scanf("%d",&m);
    int *a=(int *)malloc(m*sizeof(int));
    int i;
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&n);
    int *b=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    float median=find_median(a,b,m,n);
    printf("median:%0.1lf\n",median);
    return 0;
}
