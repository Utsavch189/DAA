#include<stdio.h>
#include<stdlib.h>
#define max 100
int stk[max],top=-1,item,n;
void Push()
{
	 if(top==max-1)
    {
        printf("\nSTACK is over flow\n");
        
    }
    else
    {
        printf(" \nEnter a value to be pushed:");
        scanf("%d",&item);
        top+=1;
        stk[top]=item;
    }
}
void Pop()
{
	if(top==-1)
	{
		printf("\nSTACK is under flow\n");
	}
	else
	{
		item=stk[top];
		top-=1;
		printf("\nDeleted element is=%d",item);
	}
}
void Display()
{
	 if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(int i=top; i>=0; i--)
            printf("\n%d",stk[i]);
       
    }
    else
    {
        printf("\n The STACK is empty");
    }
}

int main()
{
	while(true)
	{
	    printf("\tEnter your choice-\n1.Push\n2.Pop\n3.Display\n4.exit\n");
		scanf("%d",&n);
		switch(n){
			case 1:Push();
			break;
			case 2:Pop();
			break;
			case 3:Display();
			break;
			case 4:exit(0);
		}
	}
	return 0;
}
