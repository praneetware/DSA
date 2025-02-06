#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int queue[SIZE], front =-1, rear = -1;

void enqueue(int item)
{
	if(rear==SIZE-1)
	{
		printf("Queue is already full");
	}
	else
	{
		if(front==-1)
		{
			front = 0;
		}
		rear = rear+1;
		queue[rear] = item;
	}
}

void dequeue()
{
	if(front==-1)
	{
		printf("Queue is already empty \n");
	}
	else
	{
		printf("\n Dequeued %d ", queue[front]);
		front = front+1;
	}
}

void printQueue()
{
	if(rear==-1)
	{
		printf("Queue is empty");
	}
	else
	{
		int i;
		printf("\n Queue:");
		for(i=front;i<=rear; i++)
		{
			printf("%d", queue[i]);
		}
	}
}

int main()
{
	enqueue(2);
	enqueue(3);
	enqueue(2);
	enqueue(9);
	enqueue(4);
	enqueue(5);
	printQueue();
	dequeue();
	dequeue();
	printQueue();
	
}
