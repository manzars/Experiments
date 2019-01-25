#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10

int queue[MAX_SIZE],front=-1,rear=-1;

int isFull(){
	//returns 1 if stack is full else returns -1
	return rear==MAX_SIZE-1;
	
}

int isEmpty(){
//returns 1 if stack is empty else returns -1
	return front==-1&&rear==-1;
	
}

void display()
{
	int i;
	printf("The element of Queue are....");
	for(i=front;i<rear;i++)
	printf("%d\t",i);
	//return element at the top of stack
}
void insert(int d)
{
	if(!isFull())
{
	if(isEmpty())
		front++;
	rear++;
		queue[rear]=d;
	printf("\nInserted element successfully %d",d);
		}
	else
		printf("\nEnlement can not be inserted Queue is full");
   }
			void delete()
				{
			int d;
				if(!isEmpty())
			{
				d=queue[front];
			if(front==rear)
				front=rear=-1;
			}
						else
			front++;
printf("The element deleted is %d",d);
printf("The queue is empty");
}
int main(){
	int choice,e;
	do
	{
		//display menu 1.display2.insert 3.delete 4.exit
		printf("\nEnter\n1.Display\n2.Insert\n3.Delete\n4.Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);	//take input in choice variable
		switch(choice){
			case 1:
				if(!isEmpty())
				display();
				else
				printf("\nqueue is empty");
				break;
			case 2:
				printf("\nEnter the elment to be inserted: ");
				scanf("%d",&e);
				insert(e);//call push function
				break;
			case 3:
				delete();
				break;
			case 4:
				exit(0);//call exit(0) function or return 0
				break;
			default:
				printf("\nInvalid Choice");//invalid choice
				break;				
		}
	}while(1);
	return 0;
}
