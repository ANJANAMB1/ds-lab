#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main()
{
top=-1;
printf("\n enter the size of stack[max=100]:");
scanf("%d",&n);
printf("\n\t stack operations using array");
printf("\n\t.............................");
printf("\n\t 1.push\n\t 2.pop\n\t 3.display\n\t 4.exit");
do
{
 printf("\n enter the choice:");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1:
  {
  push();
  break;
  }
  case 2:
  {
  pop();
  break;
  }
  case 3:
  {
  display();
  break;
  }
  case 4:
  {
  printf("\n\t exit point");
  break;
  }
  default:
  {
   printf("\n\t please enter a valid choice");
   }
   }
   }
   while(choice!=4);
   return 0;
  }
void push()
   {
   if(top>n-1)
   {
   printf("\n\t stack is over");
   }
   else
   {
   printf("enter a value to be pushed");
   scanf("%d",&x);
   top++;
   stack[top]=x;
   }
   }
    void pop()
   {
   if(top<=-1)
   {
   printf("\n\t stack is under flow");
   }
   else
   {
   printf("The poppped element is %d",stack[top]);
   top--;
   }
   }
   void display()
   {
   if(top>=0)
   {
   printf("\n The element in stack \n");
   for(i=top;i>=0;i--)
   printf("\n%d",stack[i]);
   printf("\n press next choice");
   }
   else
   {
   printf("\n The stack is empty");   
   }
 }
   


   


