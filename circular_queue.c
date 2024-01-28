#include<stdio.h>
#include<stdlib.h>
#define MAX 3
int arr[MAX],f=-1,r=-1,i,n,ch;
void enqueue();
void dequeue();
void display();

int main()
{
 while(ch!=4)
{ 
  printf("...........CIRCULAR QUEUE USING ARRAY...........");
  printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
  printf("Enter your choice:");
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
   default:
         printf("Enter valid option!!!");
 }
}
}

void enqueue()
{
 int n;
if((f==-1) && (r==-1))
{
 f=f+1;
 r=r+1;
 printf("enter:\n");
 scanf("%d",&n);
 arr[r]=n;
 printf("inserted");
}
else if(f==((r+1)%MAX))
{
printf("Overflow");
}
else
{
printf("enter:\n");
 scanf("%d",&n);
 r=(r+1)%MAX;
 arr[r]=n;
 printf("inserted");
}
}

void dequeue()
{
  if((f==-1) && (r==-1))

{
  printf("Empty...........");
}
else
{
  printf("Deleted element is:%d\n",arr[f]);
  f=(f+1)%MAX;
}
}

void display()
{
 if((f==-1) && (r==-1))

{
  printf("Empty");
}
else
{
 printf("Elements in queue are:\n");
 for(i=f;i!=r;i=(i+1)%MAX){
   printf("%d\n",arr[i]);
    }
printf("%d\n",arr[i]);

}
} 

  


