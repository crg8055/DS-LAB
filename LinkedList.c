#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL,*current = NULL;

void create()
{
	struct node *new_node;
	new_node = (struct node *)malloc(sizeof(struct node));
	printf("Enter the item :  \n");
	scanf("%d", &new_node->data);
	new_node->next = NULL;
	if(head == NULL)
	{
		head = new_node;
		current = head;
	}
	
	else{
		current->next = new_node;
		current = new_node;
	}
	
}



void display()
{
	struct node *temp;
	temp = head;
	if(head == NULL)
	{
		printf("EMPTY LIST!!");
	}
	while(temp!=NULL)
	{
		printf(" %d \t",temp->data);
		temp=temp->next;
	}
}



void insert_beg(){
	
	struct node *new_node;
	new_node = (struct node *)malloc(sizeof(struct node));
	printf("enter the element\n");
	scanf("%d",&new_node->data);
	
	if(head == NULL)
	{
		head = new_node;
		new_node = head;
		
	}else{
		new_node->next = head;
		head = new_node;
	}
}


void insert_spec(){
	
	struct node *new_node,*temp;
	int pos,i;
	printf("Enter the position in which the element is to be inserted \n");
	scanf("%d",&pos);
	
	if(pos == 1){
		insert_beg();
	}
	else{
			new_node = (struct node *)malloc(sizeof(struct node));
			printf("enter the element\n");
			scanf("%d",&new_node->data);
			new_node->next = NULL;
			temp = head;
			for(i=1;i<pos-1;i++)
				temp = temp->next;
			new_node->next = temp->next;
			temp->next = new_node;			
	
	}
	
}




void main(){
	int choise;
	
	while(1){
		printf("\n1 - create\n");
		printf("2 insert at the beginning\n");
		printf("3 - insert at the specified position\n");
		printf("4 - display\n");
		printf("5 - Exit\n");
		printf("Enter your choise:  \n");
		scanf("%d",&choise);
		
		switch(choise)
		{
			case 1: create();
					break;
			
			case 2: insert_beg();
					break;
					
			case 3: insert_spec();
					break;
					
			case 4: display();
					break;
					
			case 5: exit(0);
		}
		
	}
}
