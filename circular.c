#include<stdio.h>
#include<stdlib.h>
#define max 3
int q[10],front=0,rear=-1;
void main()
{
  int ch;
  void insert();
  void delete();
  void display();
  printf("1. Insert\n 2. Delete\n 3. Display\n 4.Exit\n");
  while(1)
  {
    printf("Enter your Choice:");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:insert();
      break;
      case 2:delete();
      break;
      case 3:display();
      break;
      case 4:exit(1);
      default:printf("Invalid Option\n");
    }
  }
}

void insert()
{
  int x;
  if((front==0&&rear==max-1)||(front>0&&rear==front-1))
  printf("Queue Overflow\n");
  else
  {
    printf("Enter the Element to insert:");
    scanf("%d",&x);
    if(rear==max-1&&front>0)
    {
      rear=0;
      q[rear]=x;
    }
    else
    {
      if((front==0&&rear==-1)||(rear!=front-1))
      q[++rear]=x;
    }
  }
}

void delete()
{
  int a;
  if((front==0)&&(rear==-1))
  {
    printf("Queue Underflow\n");
    exit(1);
  }
  if(front==rear)
  {
    a=q[front];
    rear=-1;
    front=0;
  }
  else
  if(front==max-1)
  {
    a=q[front];
    front=0;
  }
  else a=q[front++];
  printf("Deleted element is:%d\n",a);
}

void display()
{
  int i,j;
  if(front==0&&rear==-1)
  {
    printf("Queue underflow\n");
    exit(1);
  }
  if(front>rear)
  {
    for(i=0;i<=rear;i++)
    printf("\t%d",q[i]);
    for(j=front;j<=max-1;j++)
    printf("\t%d",q[j]);
    printf("\nRear is at %d\n",q[rear]);
    printf("\nFront is at %d\n",q[front]);
  }
  else
  {
    for(i=front;i<=rear;i++)
    {
      printf("\t%d",q[i]);
    }
    printf("\nRear is at %d\n",q[rear]);
    printf("\nFront is at %d\n",q[front]);
  }
  printf("\n");
  
}
