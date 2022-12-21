#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
 int data;
 struct node*prev,*next;
 };
 struct node*head=NULL,*temp,*newnode;
 void insertfirst()
 {
 struct node*newnode;
 newnode=(struct node*)malloc(sizeof(struct node*));
 if(newnode==NULL)
   printf("\n no space");
   else
   {
   printf("\n enter the element to be inserted :");
   scanf("%d",&newnode->data);
   newnode->next=NULL;
   newnode->prev=NULL;
   if(head==NULL)
   {
    temp=head=newnode;
    }
    else
    {
    temp->next=newnode;
    }
    newnode->prev=temp;
    temp=newnode;
    
   }
   printf("\n %d inserted into the list",newnode->data);
   }
   void insertlast()
 {
 struct node*temp,*newnode;
 newnode=(struct node*)malloc(sizeof(struct node*));
 newnode->next=NULL;
 temp=head;
 if(newnode==NULL)
   printf("\n no space");
   else
   {
   while(temp->next!=NULL)
   temp=temp->next;
   printf("\n enter the element to be inserted :");
   scanf("%d",&newnode->data);
   temp->next=newnode;
   newnode->prev=temp;
   temp=newnode;
   printf("\n %d inserted into the list",newnode->data);
   }
   }
   void insertlocation()
 {
 struct node*newnode,*temp;
 int item,i,n;
 newnode=(struct node*)malloc(sizeof(struct node*));
 if(newnode==NULL)
 {
  printf("\n OVERFLOW");
  }
  else
  {
   temp=head;
 printf("\n enter the location:");
 scanf("%d",&n);
 for(i=0;i<n-1;i++)
 {
 temp=temp->next;
 if(temp==NULL)
 {
 printf("There are less than %d elements",n);
 return;
 }
 }
   printf("\n enter the value:");
   scanf("%d",&item);
   newnode->data=item;
   newnode->next=temp->next;
   newnode->prev=temp;
   temp->next=newnode;
   temp->next->prev=newnode;
   printf("\n %d is inserted successfully \n",newnode->data);
   }
   }
   void deletefirst()
   {
   struct node*temp;
   temp=head;
   head=temp->next;
   printf("%d deleted",temp->data);
   free(temp);
   }
   
   void deletelast()
   {
   struct node*temp,*prev;
   temp=head;
   while(temp->next!=NULL)
   {
   prev=temp;
   temp=temp->next;
   temp->next=newnode;
   }
   printf("%d deleted",temp->data);
   prev->next=NULL;
   free(temp);
   }
    void deletelocation()
   {
   struct node*newnode,*temp;
   int val;
    printf("\n enter the data after which the node is to be deleted  :");
    scanf("%d",&val);
   newnode=head;
   while(newnode->data!=val)
   {
   newnode=newnode->next;
   }
   if(newnode->next==NULL)
   {
    printf("\n element not found\n");
    }
    else if(newnode->next->next==NULL)
    {
      newnode->next=NULL;
    }
    else
    {
      temp=newnode->next;
      newnode->next=temp->next;
      temp->next->prev=newnode;
     free(temp);
     printf("\n %d is deleted  \n",newnode->data);
     }
     }
     void search()
     {
     
     struct node*temp;
     int key,pos=0;
     temp=head;
    printf("\n enter the element to be searched :");
    scanf("%d",&key);
   while(temp->data!=key)
   {
   temp=temp->next;
   pos++;
   if(temp==NULL)
   break;
   }
    if(temp==NULL)
    {
     printf("\n The %d value not exist",key);
     return;
     }
     if(temp->data==key)
     {
      printf("\n %d value available in location %d",key,pos+1);
      }
      }
    void display()
    {
    struct node*p;
   if(head==NULL)
   printf("list is empty");
   else
   {
   printf("\n element in linked list are:");
   p=head;
   while(p!=NULL)
   {
   printf("\t%d",p->data);
   p=p->next;
   }
   }
   }
   void main()
   {
    int choice;
    printf("\n DOUBLY LINKED LIST \n ");
    do
    {
    printf("\n\n 1.insert in beggining \n 2. insert at last\n 3. insert at any random location \n 4. delete from beggining \n 5. delete from last\n 6. delete node after specified location \n 7. search for an element \n 8. display \n 9. exit" );
    printf("\n enter a choice :");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:insertfirst();
    break;
     case 2:insertlast();
    break;
     case 3:insertlocation();
    break;
    case 4:deletefirst();
    break;
     case 5:deletelast();
    break;
     case 6:deletelocation();
    break;
    case 7:search();
    break;
    case 8:display();
    break;
    case 9:exit(0);
    printf("exiting the program ");
    return;
    default:printf("\n invalid option");
    }
    }
    while(choice!=9);
    }      
 
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    