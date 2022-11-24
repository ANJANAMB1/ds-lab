#include<stdio.h>
void main()
{
int i,j,a[20],temp,n;
printf("Enter the array limit");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Array is ");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}

}

