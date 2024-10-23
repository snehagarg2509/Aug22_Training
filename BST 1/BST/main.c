#include "bst.h"
int main()
{
        bst_node *root =NULL;
        int choice;
        int item;
        do
        {
                printf("\n\n1: Insert an element in the tree");
                printf("\n2: Display inorder traversal ");
                printf("\n3: Delete a node from tree ");
                printf("\n4: Display preorder traversal ");
                printf("\n5: Display postorder traversal ");
                printf("\n6: exit\n");
                scanf("\n%d",&choice);
                switch(choice)
                {
                        case 1: {
                                   printf("\nEnter a node to be inserted ");
                                   scanf("%d",&item);
                                   insert(&root,item);
                                   break;
                                }
                        case 2: {
                                  inorder(root);
                                  break;
                                }
                        case 3: {
                                   printf("\nEnter a node to be deleted ");
                                   scanf("%d",&item);
                                   delete_node(&root,item);
                                   break;
                                }
                        case 4: {
                                  preorder(root);
                                  break;
                                }
                        case 5: {
                                  postorder(root);
                                  break;
                                }
                }
        }while(choice!=6);
	

        return 0;
}

