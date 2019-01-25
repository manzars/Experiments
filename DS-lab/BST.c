/*tree is non linear data structure
tree is a graph
tree is collection of virtises & edges
in tree there are no cycle
tree have one root(Parent) & many childrens(Branches)
the node which have no children called leaf
binary tree have atmost two children
operation- insertion, deletion, searching, tradition
traversing in tree-  inorder(infix a+b)     preorder(prefix  +ab)      postorder(postfix ab+)
Inorder     LDR (left data right)
preorder    DLR (data left right)
postorder   LRD (left right data)
deletion    i) The node has no child
*           ii) The node has 1 child
*           iii) The node has 2 child
*           iv)  The node has
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct bst{
	int data;
	struct bst *left,*right;
}node;

void insert(node **r,int num){
     node *temp,*ptr;
     temp=*r;
     ptr=(node*)malloc(sizeof(node));
     ptr->data=num;
     ptr->left=NULL;
     ptr->right=NULL;
     if(temp==NULL)
		  *r=ptr;
	  else{
		   if(num<temp->data){
					insert(&temp->right,num);
		   }
		   else{
					insert(&temp->left,num);
		  }
	}
}


void traverse_inorder(node *r){
	if(r!=NULL){		
	traverse_inorder(r->left);
	printf("%d\t",r->data);
	traverse_inorder(r->right);
        }
}
 
int search_bst(node *r,int num){
     
    if(r==NULL)
		  return 0;
	  else{
		  if(r->data==num)
		  return 1;
		  else{
		   if(num>r->data)
		      return search_bst(r->right,num);
		      else
		        return search_bst(r->left,num);
}
}
}                                                                        

 void search_node(node **x,node *root,node **parent,int num,int *f)         
 {
	  node *temp;
	  temp=root;
	  if(root==NULL)
	      return;
	  while(temp!=NULL){
	        if(num==temp->data)
	  {
		   *f=1;
		   *x=temp;
		   return;
	 }
	 *parent=temp;
	 if(num>temp->data)
	       temp=temp->right;
	 else
	    temp=temp->left;
    }	
 }
 
 void delete(node **r,int num){
          node *temp,*parent,*xsucc,*x;
          int f=0;
          parent=NULL;x=NULL;xsucc=NULL;
          temp=*r;
          search_node(&x,temp,&parent,num,&f);
			if(f==0){
				 printf("\nThe element %d is not foun",num);
				 return;
			 }//x has no child
			 if(x->left==NULL && x->right==NULL)
			 {
				 if(x->data>parent->data)
					parent->right=NULL;
				else
				   parent->left=NULL;
			 }
			 
			 //x has left child
			 else if(x->left!=NULL  && x->right==NULL)
			 {
				 if(x->data>parent->data)
					parent->right=x->left;
				else
				   parent->left=x->left;
			 }
			 
			 //x has right child
			 else if(x->left==NULL && x->right!=NULL)
			 {
				 if(x->data>parent->data)
					parent->right=x->right;
				else
				   parent->left=x->right;
			 }
			 
			 //x has both left and right child
				 else if(x->left!=NULL && x->right!=NULL)
				 {
					  parent=x;
					  xsucc=x->right;
					  while(x->left!=NULL)
					  {    
						   parent=xsucc;
						   xsucc=xsucc->left;
					 }
					 if(xsucc->data>parent->data)
					     parent->right=NULL;
					 else
					     parent->left=NULL;
					 x->data=xsucc->data;
					 x=xsucc;
}free(x);
}


int main(){
	  int c,a;
	  node *root=NULL;
	  do{
      printf("ENTER YOUR CHOICE:  \n");
	  printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n");
	  scanf("%d",&c);
	  switch(c)
	  {
	    case 1: printf("ENTER THE NUMBER TO BE INSERTED: ");
	            scanf("%d",&a);
	            insert(&root,a);
	            break;
	    case 2: printf("ENTER THE NUMBER TO BE DELETED: ");
	            scanf("%d",&a);
	            delete(&root,a);
	            break;
	    case 3: traverse_inorder(root);
	            break;
	    case 4: exit(0);
	            break;
	    default: printf("INVALID INPUT");
	             break;
			 }
			 }while(1);
			 return 0;
		 }
	            
	         
	            
	 /* traverse_inorder(root);
	  if(search_bst(root,10)==1)
	   printf("\nThe number is found");
	   else
	    printf("\nThe number is not found");
	  return 0;

*/
