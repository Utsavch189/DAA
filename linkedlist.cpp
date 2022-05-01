#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head,*temp=0;
void createList(){

	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	
	
	
	printf("enter the data  ");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(head==0){
	
	head=newnode;
	temp=newnode;
	}
	
	else{
		temp->next=newnode;
		temp=newnode;
	}
	printf("\n");
}

void display(){
	struct node *cur=head;
	while(cur!=NULL){
		printf("%d  ",cur->data);
		cur=cur->next;
	}
	printf("\n");
}

int main(){
	struct node *temp;
	int ch;
	while(1){
	printf("press 1 to continue or press 2 for exit or press 3 for display    ");
	scanf("%d",&ch);
	switch(ch){
	case 1:
	createList();
	break;
	case 2:
		exit(0);
	case 3:
		display();
		break;
		
	
	}}
	
	return 0;
}
