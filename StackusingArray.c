#include <stdio.h>
#include <stdlib.h>
int SIZE = 8;
int stack[8];
int top = -1;

int isEmpty()
{
	if(top==-1)
		return 1;
	else
		return 0;
}

int pop()
{
	int data;
	if(!isEmpty()){
		data = stack[top];
		top = top-1;
		return data;
	}
	else{
		printf("Stack is empty");
	}
}

int push(int data)
{
	if(top!=SIZE){
		top=top+1;
		stack[top] = data;
	}
	else{
		printf("Stack is full");
	}
}

int peek()
{
	int data;
	if(!isEmpty()){
		data = stack[top];
		return data;
	}
	else{
		printf("Stack is empty");
	}
}



int main()
{
	int i;
	push(10);
	push(20);
	push(30);
	for(i=0;i<SIZE;i++)
	{
		printf("%d ", stack[i]);
	}
}
