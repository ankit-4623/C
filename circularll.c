#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*add;
};struct node*start=NULL,*temp,*prev,*next,*tail,*new1;
void create();
void display();
void insert_first();
void insert_last();
void insert_mid();
void delete_first();
void delete_last();
void delete_mid();
void main()
{
    int n;
    
    printf("....Criculer Linked List....");
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
        // case 9:
        // reverse();
        // break;
        // case 10:
        // count();
        // break;
      
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
        printf("Enter an element in Linked List :");
        scanf("%d",&n);
        if(start==NULL)
        {
            start=(struct node*)malloc(sizeof(struct node));
            start->data=n;
            start->add=NULL;
            tail=start;
        }
        else
        {
           new1=(struct node*)malloc(sizeof(struct node));
            new1->data=n;
            new1->add=NULL;
            tail->add=new1;
            tail=tail->add;
             tail->add=start;
            
        }
        printf("\nWant to continue (Y/N): ");
        scanf(" %c", &c);
        
    } while (c=='Y'||c=='y');
    
}
void display()
{
    if(start==NULL)
    {
        printf("Linked list is empty :");
    }
    else
    temp=start;
    while(temp->add!=start)
    {
        printf("%d\t",temp->data);
        temp=temp->add;
    }
     printf("%d\t",temp->data);
     printf("%d",temp->add->data);
}
void insert_first(){
    int n;
    if(start==NULL)
    {
        printf("List is Empty");
    }
    else
    printf("Enter an element :");
    scanf("%d",&n);
    new1=(struct node*)malloc(sizeof(struct node));
    new1->data=n;
            new1->add=start;
            start=new1;
             tail->add=start;
}
void insert_last()
{
   int n;
    if(start==NULL)
    {
        printf("List is Empty");
    }
    else
    printf("Enter an element :");
    scanf("%d",&n);
    new1=(struct node*)malloc(sizeof(struct node));
    new1->data=n;
    new1->add=NULL;
    tail->add=new1;
    tail=tail->add;
    tail->add=start;
}
void insert_mid()

{
    int n,p,i=1;
    printf("Enter your position :");
    scanf("%d",&p);
     if(start==NULL)
    {
        printf("List is Empty");
    }
    else
    printf("Enter an element :");
    scanf("%d",&n);
    new1=(struct node*)malloc(sizeof(struct node));
    new1->data=n;
    next=start;
    while(i<p)
    {
        prev=next;
        next=next->add;
        i++;
    }
    prev->add=new1;
    new1->add=next;
}
void delete_first()
{ 
    temp=start;
    if(start==NULL)
    {
        printf("list is empty ");
    }
    else if (temp==tail)
    {
        printf("%d",temp->data);
        free(temp);
    }
    
    else
    {
        start=start->add;
        tail->add=temp->add;
        printf("Deleted node is %d ",temp->data);
        free(temp);
    }
    
    
}
void delete_last()
{
    if(start==NULL)
    {
        printf("list is empty ");
    }
    else
    {     prev=start;
        temp=start;
        while (temp->add!=start)
        {
            prev=temp;
            temp=temp->add;
        }
        
        tail=prev;
        tail->add=start;
        printf("Deleted node is %d",temp->data);
        free(temp);
        
    }
    
}
void delete_mid()
{
    int p,i=1;
     if(start==NULL)
    {
        printf("list is empty ");
    }
    else
    {
        printf("enter the position :");
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
        printf("Deleted node is %d",temp->data);
        free(temp);
        
    }
    

}