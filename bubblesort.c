#include<stdio.h>
void main()
{
int a[20],i,j,tem,n;
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the value of elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
for(j=0;j<n-1;j++)
{
if(a[j]>a[j+1])
{
tem=a[j];
a[j]=a[j+1];
a[j+1]=tem;
}
}
}
printf("elements after sorting");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}