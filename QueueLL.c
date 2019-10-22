#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

struct node *front = NULL,*rear = NULL;

void insert(){
	struct node *new_node;
	new_node = (struct node * )malloc(sizeof(struct node));
	printf("Enter the element to insert in the queue :    \n");
	scanf("%d",&new_node->data);
	new_node->next = NULL;
	
	if(rear == NULL){
		
		rear = new_node;
		front = new_node;
	}else{
		
		rear->next = new_node;
		rear = new_node;
	}
}




void del(){
	
	if(front == NULL){
		
		printf("queue is empty\n");
	}else{
		printf("%d element is deleted from the queue \n",front->data);
		front = front->next;
	}
}




void display(){
	
	struct node *temp;
	if(front == NULL)
		printf("QUEUE IS EMPTY!!! \n");
	temp = front;
	while(temp!=NULL){
		printf("%d \n",temp->data);
		temp = temp->next;
	}
}



void main(){
	int choise;
	while(1){
		
		printf("1  - insert\n");
		printf("2 - delete\n");
		printf("3 - DISPLAY\n");
		printf("4 - exit\n");
		printf("Enter your choise:  \n");
		scanf("%d",&choise);
		switch(choise){
			
			case 1: insert();
					break;
			case 2: del();
					break;
			case 3: display();
					break;
			case 4: exit(0);
			
			default: 
					printf("wrong Input!! :) \n");
				
		}
	}
}
