#include "bst.h"

static bst_node *create_node(int);
static void find(bst_node *, bst_node **, bst_node **, int);
static void delete_01child(bst_node**,bst_node*,bst_node*);
static void delete_2child(bst_node**,bst_node*,bst_node*);


static bst_node *create_node(int element)
{
	bst_node *new;//declaring a new_node temp
	new=(bst_node*)malloc(sizeof(bst_node));//allocating memory to temp

	if(NULL != new)
	{
		new->data=element;
		new->left=NULL;
		new->right=NULL;
	}
        else
        {
           printf("Memory allocation failure in creating new node\n");
        }
	return new;
}


static void find(bst_node *root,
          bst_node **loc,
          bst_node **par,
          int item)
{
	bst_node *ptr;
	if(NULL == root) //if Tree Empty 
	{
           *loc = NULL;
           *par = NULL;
           return;
	}
        
        /* If item at root */
        
        if (item == root->data)
        {
           *loc = root;
           *par = NULL;
           return;
        }
        
        /* Initialize Pointers */
        
        *par = root;
        if (item < root->data)
        {
           ptr = root->left;
        }
        else
        {
           ptr = root->right;
        }

	while(NULL != ptr)
	{
		if(item == ptr->data)
		{
                   *loc = ptr;
		   return;
		}
		*par = ptr;
		if(item < ptr->data)
		{
		   ptr = ptr->left;
		}
		else 
		{
		   ptr = ptr->right;
		}
	}
        *loc = NULL;
	return ;
}

int insert(bst_node **root,
           int item)
{
        bst_node *loc, *par, *new_node;

        loc = NULL;
        par = NULL;

        /* check if item is present in the tree */
        
        find(*root, &loc, &par, item);

	if(NULL != loc)
	{
            printf("item already present. Duplicate Entry, Can't insert\n");
            return FAILURE;
	}
	else
	{
		new_node = create_node(item); 
                if (NULL == par)
                {
                     *root = new_node;
                }
		else
		{
		   if(item < par->data)
                   {
			par->left = new_node;
                   }
                   else
                   {
		        par->right = new_node;
                   }

	        }
	}
        return SUCCESS;
}


void inorder(bst_node *root)
{
	if(NULL == root)
        {
		return;
        }
	inorder(root->left);
	printf("%4d->",root->data);
	inorder(root->right);
}


void preorder(bst_node *root)
{
	if(NULL == root)
        {
		return;
        }

	printf("%4d->",root->data);
	preorder(root->left);
	preorder(root->right);
}


void postorder(bst_node *root)
{
	if(NULL == root)
        {
	    return;
        }

	postorder(root->left);
	postorder(root->right);
	printf("%4d->",root->data);
}


void free_bst(bst_node *root)
{
	if(NULL == root)
        {
	   return;
        }
	free_bst(root->left);
	free_bst(root->right);
	free(root);
}


int delete_node(bst_node **root, int item)
{
    bst_node *loc, *par;


    find(*root, &loc, &par, item);
    
    if (NULL == loc)
    {
        printf("\nItem not present, can't delete\n");
        return FAILURE;
    }

   /* Check no of children and call appropriate procedure */

    if ((NULL != loc->left) && (NULL != loc->right))
    {
        delete_2child(root, par, loc);
    }
    else
    {
        delete_01child(root, par, loc);
    }
    
    free(loc);
    loc = NULL;
 
    return SUCCESS;
}


static void delete_01child(bst_node **root,
                           bst_node *par,
                           bst_node *loc)
{
     bst_node *child;

     child=NULL;

     /* initialize child to correct location */
    
     if(NULL != loc->right)
     {
          child=loc->right;
     }

     if(NULL != loc->left)
     {
          child=loc->left;
     }
     
     if(NULL == par)
     {
          *root=child;
     }
     else
     {
        if (loc == par->left)
        {
           par->left = child;
        }
        else
        {
           par->right = child;
        }
     }
}

static void delete_2child(bst_node **root,
                   bst_node *par,
                   bst_node *loc)
{
     bst_node *ptr, *parsuc, *suc;
 
     /* find inorder successor */

     ptr = loc->right;
     parsuc = loc; 
    
     while(NULL != ptr->left)
     {
        parsuc = ptr;
        ptr = ptr->left;
     }
     
     suc = ptr;
     delete_01child(root, parsuc, suc);
     if (NULL != par)
     {
         if (loc == par->left)
         {
             par->left = suc;
         }
         else
         {
             par->right = suc;
         }
      }
      else
      {
         *root = suc;
      }

     suc->left = loc->left;
     suc->right = loc->right;
}

int delete(bst_node **root, int item)
{
    bst_node *loc, *par;

    /* find if item is present else report the same */

    find(*root, &loc, &par, item);
    
    if (NULL == loc)
    {
        printf("\nItem not present, can't delete\n");
        return FAILURE;
    }

   /* Check no of children and call appropriate procedure */

    if ((NULL != loc->left) && (NULL != loc->right))
    {
        delete_2child(root, par, loc);
    }
    else
    {
        delete_01child(root, par, loc);
    }
    
    free(loc);
    loc = NULL;
 
    return SUCCESS;
}
