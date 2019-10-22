#include<stdio.h>
#include<stdlib.h>
#define MAX 15

void push(int stack[MAX],int *top,int new){
	
	if(*top == MAX-1){
		printf("Stack overFlow!!\n");
		exit(0);
	}else{
		stack[++(*top)] = new;
	}
}

void display(int stack[MAX],int *top){
	

	int i;
	
	if(*top == -1){
		printf("Stack UnderFlow!!\n");
		return;
	}
	printf("Stack elements are: \n");
	for(i=*top;i>=0;i--){
		printf("%d\n",stack[i]);
	}
}



int pop(int stack[MAX],int *top){
	
	if(*top == -1){
		printf("Stack UnderFlow!!\n");
		return -1;
	}
	return stack[(*top)--];
	
	
}


void main(){
	char input[20] = "623+-382/+*";
	int i = 0,op1,op2,res;
	int x;
	int top = -1;
	int stack[MAX];
	while(input[i]!= '\0')
	{
		if(input[i] >= '0' && input[i]<='9')
			push(stack,&top,input[i]-'0');
			
			
		else{
				op2 = pop(stack,&top);
				op1 = pop(stack,&top);
				switch(input[i])
				{
				
					case '+': res = op1 + op2;
					case '-': res = op1 + op2;
					case '*': res = op1 + op2;
					case '/': res = op1 + op2;
				
				}
				push(stack,&top,res);	
				
		   }
			i++;
		
	}
	
	x = pop(stack,&top);
	printf("result is: %d\n",x);
	
}
