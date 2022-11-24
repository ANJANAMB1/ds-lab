#include<stdio.h>
int fsum()
{
int a, b,sum=0;
printf("enter the number");
scanf("%d %d",&a,&b);
sum=a+b;
printf("%d",sum);
}
void main()
{
int s=0;
printf(" sum of no using  fn \n");
s=fsum();
printf("sum is%d",s);
}
