Mission-r-n-d
=============

2k14 mission r&amp;d classes
#include<stdio.h>
void read(int *a,int n)
{
    printf("enter the values into tha array\n");
    int i=0;
    for(;i<n;i++)
    {
        scanf("%d",&a[i]);
        //a[i]=rand()%100;//if you want to tkae random integers i to the array
    }
}
int hash(int *a,int *b,int n)
{
    int i,maxpos;
    for(i=0;i<n;i++)
    {
        b[a[i]]++;
    }
    maxpos=0;
    for(i=1;i<100;i++)
    {
        if(b[i]>b[maxpos])
        {
            maxpos=i;
        }
    }
    return maxpos;
}
void maxoccurrence(int maxpos,int n,int *b)
{
    int i;
    for(i=maxpos;i<n;i++)
    {
        if(b[i]==b[maxpos])
        printf("\nvalue :%d  no. of times repeated %d",i,b[i]);
    }
}
int main()
{
    int n;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    int *a=(int *)malloc(n*sizeof(int));
    read(a,n);
    int *b=(int *)malloc(100*sizeof(int));
    int i;
    for(i=0;i<100;i++)
    {
        b[i]=0;
    }
    int maxpos=hash(a,b,n);
    maxoccurrence(maxpos,n,b);
    return 0;
}
