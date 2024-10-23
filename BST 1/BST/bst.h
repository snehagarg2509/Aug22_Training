#include<stdio.h>
#include<stdlib.h>

#define SUCCESS 1
#define FAILURE 0

typedef struct node
{
	int data;
	struct node *left;
	struct node *right;
}bst_node;


int insert(bst_node**,int);
int delete_node(bst_node**,int);
void free_bst(bst_node *root);
void inorder(bst_node*);
void preorder(bst_node*);
void postorder(bst_node*);


