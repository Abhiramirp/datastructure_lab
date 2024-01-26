#include<stdio.h>
#define MAX 6
#include<stdlib.h>
int q[MAX],f=-1,r=-1;
void enqueue();
void dequeue();
void display();
void main()
{
  int ch;
 while(ch!=4)
{
  printf("\n1.insertion\n2.deletion\n3.display\n4.exit\n");
  printf("choose any option:");
  scanf("%d",&ch);

 switch(ch)
 {
  case 1:enqueue();
         break;
  case 2:dequeue();
         break;
  case 3:display();
         break;
  case 4:exit(1);
        break;
  default:printf("enter a valid option!!");
 }
}
}
void enqueue()
{
int n;
printf("Enter the element to insert:");
scanf("%d",&n);
if(f==-1&&r==-1)
 {
  f=f+1;
  r=r+1;
  q[r]=n;
  printf("Element inserted");
}
else
{
 r=(r+1)%MAX;
 q[r]=n;
printf("Element inserted");
}
if(f==r)
{
printf("not posssible");
}
}
 
void dequeue()
{
 if(f==-1&&r==-1)
{
 printf("Not possible");
}
else
{
printf("Deleted element is:%d",q[f]);
 f=(f+1)%MAX;
}
}

void display()
{
 if(f==-1&&r==-1)
{
 printf("empty");
}
else
{
printf("Elements in q are:");
while(f<=r)
{
 printf("%d\t",q[f]);
 f=(f+1)%MAX;
}
} 
} 
