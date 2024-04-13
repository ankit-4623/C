#include <stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node*add;
};struct node*start=NULL,*temp,*new1,*prev,*next;
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
   
    do{
        printf("\n------Linked List-------\n");
        printf("1.Create\n2.Insert on First\n3.Insert on Last \n4.Insert on middle\n5.Delete from first\n6.Delete from Last\n7.Delete from Middle\n8.Display\n9.Exit");
        printf("\n");
        printf("Enter your Choice:");
         scanf("%d",&n);
         switch(n)
         {
             case 1:create();
             break;
             case 8:display();
             break;
             case 2: insert_first();
             break;
             case 3:
             insert_last();
             break;
             case 4:
             insert_mid();
             break;
             case 5:
             delete_first();
             break;
             case 6:
             delete_last();
             break;
             case 7:
             delete_mid();
             break;
         }
    }while(n!=9);
}
void create() {
    int num;
    char ch;
    do {
        printf("Enter an element: ");
        scanf("%d", &num);
        if (start == NULL) {
            start = (struct node*)malloc(sizeof(struct node));
            start->data = num;
            start->add = NULL;
            temp = start;
        }
        else {
            new1 = (struct node*)malloc(sizeof(struct node));
            new1->data = num;
            new1->add = NULL;
            temp->add = new1;
            temp = temp->add;
        }
        printf("\nWant to continue (Y/N): ");
        scanf(" %c", &ch);
    } while (ch == 'Y' || ch == 'y');
}
void display()
{
    if(start==NULL)
    {
        printf("Linked list is empty :");
    }
    else
    temp=start;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->add;
    }
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
    temp=start;
    while(temp->add!=NULL)
    {
        temp=temp->add;
    }
    temp->add=new1;
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
    if(start==NULL)
    {
        printf("list is empty ");
    }
    else
    {
        temp=start;
        start=start->add;
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
    {
        temp=start;
        while (temp->add!=NULL)
        {
            prev=temp;
            temp=temp->add;
        }
        prev->add=NULL;
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