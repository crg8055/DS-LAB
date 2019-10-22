#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *top = NULL;


void push(){
	
	struct node *new_node;
	new_node = (struct node *)malloc(sizeof(struct node));
	printf("Enter the elemnent: \n");
	scanf("%d",&new_node->data);
	new_node->next = NULL;
	if(top == NULL){
		top = new_node;
	}else{
		new_node->next = top;
		top = new_node;
	}
	
}


void pop(){
	
	if(top == NULL){
		printf("STACK IS EMPTY UNDERFLOW!!!\n");
	}else{
		
		printf("%d item deleted from the stack\n",top->data);
		top = top->next;
	}
}


void display(){
	struct node *temp;
	if(top == NULL)
		printf("stack is empty!!\n");
	else{
		
		temp = top;
		while(temp!=NULL){
			
			printf("%d\n",temp->data);
			temp = temp->next;
		}
	}
}






void main(){
	int choise;
	while(1){
		
		printf("1  - PUSH\n");
		printf("2 - POP\n");
		printf("3 - DISPLAY\n");
		printf("4 - exit\n");
		printf("Enter your choise:  \n");
		scanf("%d",&choise);
		switch(choise){
			
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: display();
					break;
			case 4: exit(0);
			
			default:
					printf("Wrong Input!!! :) \n");
				
		}
	}
}
