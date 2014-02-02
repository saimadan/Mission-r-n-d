#include<stdio.h>
#include<stdlib.h>
class node
{
    public:
    int data;
    node *link;
}*p;
void insert(int n)
{
   node *value=(node *)malloc(sizeof(node));
   value->data=n;
   value->link=NULL;
   if(p==NULL)
   {
       p=value;
   }
   else
   {
       node *temp=(node *)malloc(sizeof(node));//temporary node to travel to the end of the linked list
       temp=p;
       while(temp->link!=NULL)
       {
           temp=temp->link;
       }
       temp->link=value;//inserting at the end of the linked list
   }
}
void getinput()
{
    int c;
    while((c=getchar())==' '||c=='\n');
    while(c!=' '&&c!='\n')
    {
        insert(c-'0');//insert in the linked list,passing the value of the digit
        c=getchar();
    }
}
void printlist()
{
    node *s=(node *)malloc(sizeof(node));
    s=p;
    while(s!=NULL)
    {
        printf("%d->",s->data);
        s=s->link;
    }
}
int main()
{
    printf("enter the input\n");
    getinput();//reading the string of numbers say 123456
    printlist();//printing the values
    return 0;
}
