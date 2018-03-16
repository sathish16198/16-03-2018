#include<stdio.h>
int main()
{
int a[20],i,j,n,t;

printf("enter the number of values:\n");
scanf("%d",&n);

printf("enter the values:\n");
for(i=0;i<n;i++)
{
{
if(a[i]>a[j])
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}   
}
printf("sorted elemete are:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}

