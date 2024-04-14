#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node*add;
};struct node*start=NULL,*temp,*prev,*new1,*next;
void create();
void insert_first();
void insert_mid();
void insert_last();
void delete_first();
void delete_mid();
void delete_last();
void display();

void main()
{
    int n;
    
    printf("....Linked List....");
    do
    {
      printf("\n1.Create\n2.insert_first\n3.insert_mid\n4.insert_last\n5.delete_first\n6.delete_mid\n7.delete_last\n8.display\n9.exit\n");
      printf("\n");
      printf("Enter your choice :");
      scanf("%d",&n);
      switch (n)
      {
      case 1:
      create();
        break;
        case 2:
        insert_first();
        break;
        case 3:
        insert_mid();
        break;
        case 4:
        insert_last();
        break;
        case 5:
        delete_first();
        break;
        case 6:
        delete_mid();
        break;
        case 7:
        delete_last();
        break;
        case 8:
        display();
        break;
      
      default:
    
        break;
      }  
    } while (n!=9);
    
}
void create()
{
   int n;
   char c;
   do
   {
    printf("enter an element in list :");
   scanf("%d",&n);
    if (start==NULL)
    {
        start=(struct node*)malloc(sizeof(struct node)); 
        start->data=n;
        start->add=NULL;
        temp=start;
   
    }
    else
    {
        new1=(struct node*)malloc(sizeof(struct node)); 
        new1->data=n;
        new1->add=NULL;
        temp->add=new1;
        temp=temp->add;
    }
    printf("\nWant to continue (Y/N): ");
        scanf(" %c", &c);
   } while (c=='Y'||c=='y');
   
}
void display()
{
    if(start==NULL)
    {
        printf("List is empty");
    }
    else
    temp=start;
    while (temp!=NULL)
    {
        printf("%d  ",temp->data);
        temp=temp->add;
    }
    
}
void insert_first()
{
    int n;
    
    if(start==NULL)
    {
        printf("list is empty");
    }
    else{
        printf("enter an element which you want to  insert first: ");
        scanf("%d",&n);
        new1=(struct node*)malloc(sizeof(struct node)); 
        new1->data=n;
        new1->add=start;
        start=new1;
        
    }
}
void insert_last()
{
    int n;
    
    if(start==NULL)
    {
        printf("list is empty");
    }
    else{
        printf("enter an element which you want to  insert last: ");
        scanf("%d",&n);
        new1=(struct node*)malloc(sizeof(struct node)); 
        new1->data=n;
        new1->add=NULL;
        temp=start;
        while (temp->add!=NULL)
        {
           temp=temp->add;
        }
        temp->add=new1;
        
        
    }
}
void insert_mid()
{
    int n,p,i=1;
    
    if(start==NULL)
    {
        printf("list is empty");
    }
    else{
        printf("enter your position :");
        scanf("%d",&p);
        printf("enter an element which you want to  insert Mid: ");
        scanf("%d",&n);
        new1=(struct node*)malloc(sizeof(struct node)); 
        new1->data=n;
        next=start;
        
        while (i<p)
        {
            prev=next;
           next=next->add;
           i++;
        }
        prev->add=new1;
        new1->add=next;
        
        
    }
}
void delete_first()
{
    if (start==NULL)
    {
        printf("list is empty");
    } 
    else
    {
        temp=start;
        start=start->add;
         printf("Deleted node is %d ",temp->data);
        free(temp);
        }
    }
void delete_mid()
{
    int p,i=1;
    
    if(start==NULL)
    {
        printf("list is empty");
    }
    else{
        printf("enter the position which you want to  delete mid: ");
        scanf("%d",&p);
       temp=start;
       while (i<p)
        {
            prev=temp;
           temp=temp->add;
           i++;
        }
       next=temp->add;
       prev->add=next;
        printf("Deleted node is %d ",temp->data);
        free(temp);
    }
}
void delete_last()
{
     if(start==NULL)
    {
        printf("list is empty");
    }
    else{
        temp=start;
        while (temp->add!=NULL)
        {
            prev=temp;
           temp=temp->add;
        }
        prev->add=NULL;
         printf("Deleted node is %d ",temp->data);
        free(temp);
         }
}