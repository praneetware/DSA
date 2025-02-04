#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

int isEmpty()
{
	if(front == NULL && rear == NULL)
	{
		return 1;
	}
	return 0;
}

void enqueue(int data)
{
	struct node *temp = (struct node *)malloc(1*sizeof(struct node));
	temp -> data = data;
	temp -> next = NULL;
	//if queue is empty
	if(rear == NULL)
	{
		front = rear = temp;
		return;
	}
	rear -> next = temp;
	rear = temp;
}

int dequeue()
{
	struct node *temp = (struct node *)malloc(1*sizeof(struct node));
	if(isEmpty())
	{
		printf("Queue underflow");
		return;
	}
	temp = front;
	front = front -> next;
	
	if(front == NULL)
	{
		rear = NULL;
	}
	free(temp);
}

void printQueue()
{
	struct node *temp;
	if((front == NULL)&&(rear == NULL))
	{
		printf("Queue is empty");
	}
	else
	{
		temp = front;
		while(temp != NULL){
			printf("%d ", temp -> data);
			temp = temp -> next;
		}
	}
}

int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	
	printQueue();
	printf("\n");
	dequeue();
	printf("\n");
	printQueue();
}

