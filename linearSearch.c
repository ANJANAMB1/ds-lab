#include<stdio.h>
void main()
{
int a[20],i,key,n;
printf("enter array limit");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the element to search");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(key=a[i])
{
printf("Element fount");
break;
}
else
{
printf("Element not fount");
break;
}}}
