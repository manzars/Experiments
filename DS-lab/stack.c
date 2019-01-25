#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10

int stack[MAX_SIZE],top=-1;

int isFull(){
	//returns 1 if stack is full else returns -1
	return top==MAX_SIZE-1;
} 

int isEmpty(){
//returns 1 if stack is empty else returns -1
    return top==-1;
}

int peek(){
//return element at the top of stack
return stack[top];
}

void push(int e){
//inserts an element into stack
	if(top<MAX_SIZE)
	{
        top=top+1;   //increment the top
        stack[top]=e;     //set top of stack equal e
        printf("element %d is succesfully inserted",e);  //msg element e successfully inserted
	}
	else{
        printf("element can not be inserted stack is overflow");
		//msg stack overflow
	}
}

void pop(int d){
//deletes an element from top of stack
	if(top>-1)
	{
        d=stack[top];      //d=top of stack
        top=top-1;         //decrement the top
        printf("element %d is successfully deleted",d);     //msg element d successfully deleted
	}
	else{
         printf("element can not be deleted stack is underflow");
		//msg stack underflow
	}
}

int main(){
	int choice,e;
	do
	{
        printf("\n1.peek\n2.push.\n3.pop\n4.exit\n\nEnter your choice: ");
        //display menu 1.peek 2.push 3.pop 4.exit
        scanf("%d",&choice);
		//take input in choice variable
		switch(choice){
			case 1:
                e=peek();  //call peek function
                printf("\nElement at top of the stack is : %d",e);
				break;
			case 2:
                printf("\nEnter an element to be inserted");
                scanf("%d",&e);
                push(e);       //call push function
				break;
			case 3:
                printf("\nEnter an elements to be deleted");
                scanf("%d",&e);             
                pop(e);       //call pop function
				break;
			case 4:
				exit(0);//call exit(0) function or return 0
				break;
			default:
                printf("invalid choice");
				//invalid choice				
		}
	}while(1);
	return 0;
}
