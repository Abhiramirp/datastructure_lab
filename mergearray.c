#include<stdio.h>
int a[10],b[10],m[20];
int sizea,sizeb,sizec,t;
int main()
{
 printf("Enter the size of first array:");
 scanf("%d",&sizea);
printf("Enter the array elements:");
for(int i=0;i<sizea;i++)
{
 scanf("%d",&a[i]);
}
printf("\nThe elements in sorted order:");
for(int i=0;i<sizea;i++)
{
 for(int j=i+1;j<sizea;j++)
{
 if(a[i]>a[j])
{
 t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
for(int i=0;i<sizea;i++)
{
 printf("%d\t",a[i]);
} 
 printf("\nEnter the size of second array:");
 scanf("%d",&sizeb);
printf("Enter the array elements:");
for(int i=0;i<sizeb;i++)
{
 scanf("%d",&b[i]);
}
printf("\nThe elements in sorted order:");
for(int i=0;i<sizeb;i++)
{
 for(int j=i+1;j<sizeb;j++)
{
 if(b[i]>b[j])
{
 t=b[i];
b[i]=b[j];
b[j]=t;
}
}
}
for(int i=0;i<sizeb;i++)
{
 printf("%d\t",b[i]);
}

sizec=sizea+sizeb;
for(int i=0;i<sizea;i++)
{
 m[i]=a[i];
}
for(int i=0;i<sizeb;i++)
{
 m[i+sizea]=b[i];
}
printf("\nThe merged array is:");
for(int i=0;i<sizec;i++)
{
 printf("%d\t",m[i]);
}
printf("\nThe merged array after sorting:\n");


for(int i=0;i<sizec;i++)
{
 for(int j=i+1;j<sizec;j++)
{
 if(m[i]>m[j])
{
 t=m[i];
m[i]=m[j];
m[j]=t;
}
}
}
for(int i=0;i<sizec;i++)
{
 printf("%d\t",m[i]);
} 

}
