#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};
struct node *top = NULL;

int pop(){
	if(top==NULL)
	{
		printf("Stack is empty");
	}
	else
	{
		struct node *temp = top;
		int tempdata = top -> data;
		top = top -> next;
		free(temp);
		return tempdata;
	}
}

void push(int data)
{
	struct node *temp = (struct node *)malloc(1*sizeof(struct node));
	if(top==NULL){
		temp -> next = NULL;
	}
	else{
		temp -> next = top;
	}
	temp -> data = data;
	top = temp;
}

void printStack()
{
	struct node *temp = top;
	if(temp==NULL)
	{
		printf("STACK UNDERFLOW");
		return;
	}
	while(temp!=NULL){
		printf("%d ", temp -> data);
		temp = temp -> next;
	}
}

int main()
{
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	
	printStack();
	printf("\n");
	pop();
	printf("\n");
	printStack();
}
