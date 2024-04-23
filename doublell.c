#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
    struct node*prev;
};struct node*head=NULL,*temp,*new1,*tail,*prev1,*next1;
void create();
void display();
void insert_first();
void reverse();
void insert_last();
void insert_mid();
void delete_first();
void delete_mid();
void delete_last();
void main()
{
    int n;
    
    printf("....Double Linked List....");
    do
    {
      printf("\n1.Create\n2.insert_first\n3.insert_mid\n4.insert_last\n5.delete_first\n6.delete_mid\n7.delete_last\n8.display\n9.reverse\n10.count\n11.exit\n");
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
        case 9:
        reverse();
        break;
        // case 10:
        // count();
        // break;
      
      default:
    
        break;
      }  
    } while (n!=11);   
}
void create()
{
    int n;
    char c;
    do
    {
        printf("enter an element in list : ");
    scanf("%d",&n);
       if(head==NULL)
       {
        head=(struct node*)malloc(sizeof(struct node));
        head->data=n;
        head->next=NULL;
        head->prev=NULL;
        tail=head;
       }
       else
       {
         new1=(struct node*)malloc(sizeof(struct node)); 
        new1->data=n;
        new1->next=NULL;
        new1->prev=tail;
        tail->next=new1;
        tail=tail->next;
    }
    printf("\nWant to continue (Y/N): ");
        scanf(" %c", &c);
       
       
    } while (c=='Y'||c=='y');
    
}
void display()
{
    if(head==NULL)
    {
        printf("List is empty");
    }
    else
    temp=head;
    while (temp!=NULL)
    {
        printf("%d  ",temp->data);
        temp=temp->next;
    }
}
void insert_first()
{
    int n;
    
    if(head==NULL)
    {
        printf("list is empty");
    }
    else{
        printf("enter an element which you want to  insert first: ");
        scanf("%d",&n);
        new1=(struct node*)malloc(sizeof(struct node)); 
        new1->data=n;
        head->prev=new1;
        new1->next=head;
        new1->prev=NULL;
        head=new1;
        
    }
}
void reverse()
{
    if(head==NULL)
    {
        printf("List is empty");
    }
    else
    temp=tail;
    while (temp!=NULL)
    {
        printf("%d  ",temp->data);
        temp=temp->prev;
    }
}
void insert_last()
{
    int n;
    
    if(head==NULL)
    {
        printf("list is empty");
    }
    else{
        printf("enter an element which you want to  insert last: ");
        scanf("%d",&n);
        new1=(struct node*)malloc(sizeof(struct node)); 
        new1->data=n;
        tail->next=new1;
        new1->next=NULL;
        new1->prev=tail;
        tail=new1;
        
    }
}
void insert_mid()
{
   int n,p,i=1;
   printf("Enter your position which you enter an element :");
   scanf("%d",&p);
    
    if(head==NULL)
    {
        printf("list is empty");
    }
    else{
        printf("enter an element which you want to  insert middle: ");
        scanf("%d",&n);
        new1=(struct node*)malloc(sizeof(struct node)); 
        new1->data=n;
        next1=head;
        while (i<p)
        {
            prev1=next1;
            next1=next1->next;

          i++;
        }
        prev1->next=new1;
        new1->prev=prev1;
        next1->prev=new1;
        new1->next=next1;
    } 
}
void delete_first()
{
     if(head==NULL)
    {
        printf("list is empty");
    }
    else
    {
        temp=head;
        head=head->next;
        head->prev=NULL;
        printf("Deleted element is %d",head->data);
        free(temp);
    }
    
}
void delete_mid()
{
     int n,p,i=1;
   printf("Enter your position which you enter an element :");
   scanf("%d",&p);
    
    if(head==NULL)
    {
        printf("list is empty");
    }
    else
    {
        temp=head;
        while (i<p)
        {
          prev1=temp;
          temp=temp->next;
            i++;
        }
        prev1->next=temp->next;
        temp->next->prev=prev1;
         printf("Deleted element is %d",temp->data);
        free(temp);
    }
}
void delete_last()
{
  if(head==NULL)
    {
        printf("list is empty");
    }
    else
    {
        temp=tail;
        tail=tail->prev;
        tail->next=NULL;
        printf("Deleted element is %d",temp->data);
        free(temp);
    }
}
