#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node*link;
}*top,*top1,*temp;

void push();
void pop();
void display();
void main()
{
 int ch,element;
 while(ch!=4)
 {
 printf("\n1.insertion");
 printf("\n2.deletion");
 printf("\n3.display");
 printf("\n4.exit");
 printf("\nEnter your choice:");
 scanf("%d",&ch);
 
switch(ch)
{
 case 1:{
 printf("Enter the element:");
 scanf("%d",&element);
       push(element);
       break;}
 case 2:{
       pop();
       break;}
 case 3:{
       display();
       break;}
 case 4:
       exit(1);
 default:
    printf("please enter valid choice");
}
}
}
void push(int element)
{
  if(top==NULL)
  {
    top=(struct node*)malloc(1*sizeof(struct node));
    top->link=NULL;
    top->data=element;
    printf("%d inserted",element);
  }
  else
  {
    temp=(struct node*)malloc(1*sizeof(struct node));
    temp->link=top;
    temp->data=element;
    top=temp;
        printf("%d inserted",element);
  }
}
    
void pop()
{
  top1=top;
  if(top1==NULL)
  {
    printf("Empty!!!!!");
  }
  else
  {
    top1=top->link;
    printf("popped element is %d\n",top->data);
    free(top);
    top=top1;
   }
}

void display()
{
  top1=top;
  if(top1==NULL)
  {
    printf("Empty!!");
  }
  while(top1!=NULL)
  {
    printf("%d-->",top1->data);
    top1=top1->link;
  }
  printf("NULL");
}
 
