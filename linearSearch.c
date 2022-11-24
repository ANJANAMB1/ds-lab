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
printf("enter the key");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(a[i]==key)
{
printf("key found");
f=1;
break;
}
}
  if(f==1)
  {
    printf("element found");
else
{
printf("Element not found");
}}
