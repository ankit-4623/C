#include<stdio.h>
#include<stdlib.h>
#define maxsize 100
int queue[maxsize];
int rear=-1,front=0;
void insert()
{
    int n;
    if(rear==maxsize-1){
    printf("Queue is overflow");
    }
    else{
    printf("enter the element :");
    scanf("%d",&n);
    rear++;
    queue[rear]=n;
    }

}
void delete1()
{
    int m;
    if (front>rear)
    {
        printf("Queue is empty ");
    }
    else
    {
        m=queue[front++];
        printf("Delete element is %d",m);

    }
    
    
}
void display()
{
    if (front>rear)
    {
        printf("Queue is empty ");
    }
    else
    {
        for (int i = front; i<=rear; i++)
        {
            printf("%d\n",queue[i]);
        }
        
    }
}
void main()
{
    int choice;
    do
    {
     printf("\n..........Queue.............");
     printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
     printf("\n");
     printf("Enter your choice :");
     scanf("%d",&choice);
     switch (choice)
     {
     case 1:
     insert();
        break;

         case 2:
     delete1();
        break;

         case 3:
     display();
        break;

     
     default:
     printf("Invalid");
        break;
     }
    } while (choice!=4);
    
}