Mission-r-n-d
=============

2k14 mission r&amp;d classes
#include<stdio.h>
int isTriangle(int x1,int y1,int x2,int y2,int x3,int y3)// checking whether the points lie on the same line
{
    if((y2-y1)*(x3-x1)==(y3-y1)*(x2-x1))
     return 1;

     return 0;
}
int sqr(int n)
{
    return n*n;
}
int isequal(int a,int total)
{
    if((3*a)==total)
        return 1;

    return 0;
}
int isright(int a,int b,int c,int total)
{
    if((2*a==total)||(2*b==total)||(2*c==total))
        return 1;

    return 0;
}
int isIsosceles(int a,int b,int c)
{
    if((a==b)||(b==c)|(c==a))
         return 1;

    return 0;
}
int main()
{
    printf("enter the no. of the test cases\n");
    int t,a,b,c,x1,x2,y1,y2,x3,y3;
    scanf("%d",&t);
     while(t--)
     {
         printf("enter the vertices of hte triangle x1,y1,x2,y2,x3,y3\n");
         scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
         if(isTriangle(x1,y1,x2,y2,x3,y3))
         {
             printf("triangle not possible all are lying on the same line i.e, collinear\n");
         }
         else
         {
             a=sqr(x1-x2)+sqr(y1-y2);
             b=sqr(x2-x3)+sqr(y2-y3);
             c=sqr(x3-x1)+sqr(y3-y1);

             int total=(a+b+c);
             int c1,c2;

            c1=isright(a,b,c,total);
            c2=isIsosceles(a,b,c);
             if(c1||c2)
             {
                if(c1&&c2)
                {
                    printf("Isosceles Right angled triangle\n");
                }
                else if(c1)
                {
                    printf("Right Ngled triangle\n");
                }
                else
                {
                    printf("Isosceles triangle\n");
                }
             }
            else if(isequal(a,total))
             {
                 printf("equilateral triangle\n");
             }

             else
             {
                 printf("Scalene triangle\n");
             }
         }
     }
    return 0;
}
