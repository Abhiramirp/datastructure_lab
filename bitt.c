#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 10
int u[MAX],a[MAX],b[MAX];
int sizea,sizeb,sizec;
int strA[MAX],strB[MAX],uni[MAX];

int main()
{
printf("Enter the size of universal set:");
scanf("%d",&sizec);
printf("Enter the elements:");
for(int i=0;i<sizec;i++)
{
 scanf("%d",&u[i]);
}
printf("Enter the size of set A:");
scanf("%d",&sizea);
printf("Enter the elements:");
for(int i=0;i<sizea;i++)
{
 scanf("%d",&a[i]);
}
printf("Enter the size of set B:");
scanf("%d",&sizeb);
printf("Enter the elements:");
for(int i=0;i<sizeb;i++)
{
 scanf("%d",&b[i]);
}

printf("The universal set is:\n");
printf("{");
for(int i=0;i<sizec;i++)
{
 printf("%d,\t",u[i]);
}
printf("}");

for(int i=0;i<sizec;i++)
{
 int t=0;
 for(int j=0;j<sizec;j++)
{
 if(a[j]==u[i])
{
 t=1;
 break;
}
}
if(t==1)
{
 strA[i]=1;
}
else
{
strA[i]=0;
}
}

printf("\nThe bit representation of set A is:\n{");
for(int i=0;i<sizec;i++)
{
 printf("%d\t",strA[i]);
}
printf("}");

for(int i=0;i<sizec;i++)
{
 int t=0;
 for(int j=0;j<sizec;j++)
{
 if(b[j]==u[i])
{
 t=1;
 break;
}
}
if(t==1)
{
 strB[i]=1;
}
else
{
strB[i]=0;
}
}

printf("\nThe bit representation of set B is:\n{");
for(int i=0;i<sizec;i++)
{
 printf("%d\t",strB[i]);
}
printf("}");

for(int i=0;i<MAX;i++)
{
 if(strA[i]||strB[i])
{
 uni[i]=1;
}
else
{
uni[i]=0;
}
}
printf("\nThe union of set a and b is:");
printf("{");
for(int i=0;i<sizec;i++)
{
 printf("%d\t",uni[i]);
}
printf("}");

for(int i=0;i<sizec;i++)
{
 if(strA[i]&&strB[i])
{
 uni[i]=1;
}
else
{
uni[i]=0;
}
}
printf("The intersection of set a and b is:");
printf("{");
for(int i=0;i<sizec;i++)
{
 printf("%d\t",uni[i]);
}
printf("}");

for(int i=0;i<sizec;i++)
{
 if(strA[i]&!strB[i])
{
 uni[i]=1;
}
else
{
uni[i]=0;
}
}
printf("The difference of set a and b is:");
printf("{");
for(int i=0;i<sizec;i++)
{
 printf("%d\t",uni[i]);
}
printf("}");

}

