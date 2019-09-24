#include<stdio.h>
#include<stdlib.h>
void push(int stack[100],int *top,int new);
int pop(int stack[100],int *top);
void display(int stack[100],int *top);
int main()
{
  int s[100], top=-1;
  int x;
  push(s,&top,10);
  push(s,&top,20);
  display(s,&top);
  x=pop(s,&top);
  printf("Popped Element is: %d \n",x);
  display(s,&top);
}
void push(int stack[100],int *top,int new)
{
   if(*top==100)
   {
     printf("Stack Overflow\n");
     exit(0);
   }
   else
   stack[++(*top)]=new;
}
int pop(int stack[100],int *top)
{
 if(*top==-1)
 {
  printf("Stack Underflow\n");
  exit(0);
 }
 else
 return stack[(*top)--];
}
void display(int stack[100],int *top)
{
  int i;
  printf("Stack is:\n");
  for(i=*top;i>=0;i--)
  printf("%d\n",stack[i]);
}











