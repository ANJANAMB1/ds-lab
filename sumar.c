#include<stdio.h>
void main()
{
int sum=0,a[10],n,i;
printf("enter the limit");
scanf("%d",&n);
printf("enter the element");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("sum of elements in the array is");
for(i=0;i<n;i++)
sum=sum+a[i];
printf("%d",sum);
}

