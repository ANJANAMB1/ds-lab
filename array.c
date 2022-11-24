#include<stdio.h>
void main()
{
int a[10],i,n;
printf("enter the limit");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Array is: \n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
