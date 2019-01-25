#include<stdio.h>
#include<ctype.h> //for isaplha() function

typedef struct conversion
{
	char a[30];
	int top;
}stack;

void push(stack*,char);

char pop(stack*);

int evaluation(char pos[]);

int operation(int n1,int n2,char opr);


int main()
{
	char postfix[30];
	printf("\nENTER POSTFIX EXPRESSION\n");
	scanf("%s",postfix);
	printf("\n\nEVALUATION OF POSTFIX EXPRESSION=\n%d",evaluation(postfix));
	return 0;
}

int operation(int n1,int n2,char opr)
{
   switch(opr)
   {
	 case '+': return n2+n1;
	 case '-': return n2-n1;
	 case '/': return n2/n1;
	 case '*': return n2*n1;
	}
 }

int evaluation(char pos[])
{
  int i,n1,n2,res;
  stack s1;
  s1.top=-1;
  for(i=0;pos[i]!='\0';i++)
  {
	 if(isdigit(pos[i]))
	  {
		  push(&s1,pos[i]-'0');
	  }
	  else
	  {
		  	n1=pop(&s1);
		  	n2=pop(&s1);
		  	res=operation(n1,n2,pos[i]);
		  	push(&s1,res);
		}
	}
	return pop(&s1);
} 


void push(stack *s,char opr)
{
	s->top++;
	s->a[s->top]=opr;
}

char pop(stack *s)
{
	if (s->top==-1)
	{
		printf("stack is empty\n");
		return 0;
    }
    else
    {
		char data=s->a[s->top--];
		return data;
    }
}

