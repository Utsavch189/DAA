#include<stdio.h>
struct node{
	int data;
struct	node *left,*right;

};
struct node * createTree(){
	int data;
struct node *root=NULL;
root=new struct node;
	printf("enter data-->\n");
	scanf("%d",&data);
	if(data==-1){
	 return NULL;
	 }
	root->data=data;
	printf(" left of %d\n  ",data);
	root->left=createTree();
		printf(" right of %d\n  ",data);
	root->right=createTree();
	return root;
};
int inorder(struct node *root){
	if (root==NULL){
		return 0;
	}
	inorder(root->left);
	printf("%d",root->data);
	inorder(root->right);
	
}
int preorder(struct node *root){
	if (root==NULL){
		return 0;
	}
	printf("%d",root->data);
	preorder(root->left);
	preorder(root->right);
}
int postorder(struct node *root){
	if (root==NULL){
		return 0;
	}
	inorder(root->left);
	inorder(root->right);
	printf("%d",root->data);
	
}
int main(){
	struct node *root;
	root=createTree();
printf("Inorder\n");	
inorder(root);printf("\n");
printf("Postorder\n");
	postorder(root);printf("\n");
printf("Preorder\n"); 
preorder(root);printf("\n");
	return 0;
}
