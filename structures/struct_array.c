#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 20
 
struct book
{
    char title[MAX];
    char author[MAX];
    int price;
};
 
typedef struct book BOOK;
BOOK b[2];
 
int main()
{  
    for(int i=0;i<2;i++)
    {
        printf("Enter book title: \n");
        fgets(b[i].title,MAX,stdin);
 
        printf("Enter author: \n");
        fgets(b[i].author,MAX,stdin);
 
        printf("Enter price: \n");
        scanf("%d",&b[i].price);
    }
 
    printf("Details are:\n");
    for(int i=0;i<2;i++)
    {
        printf("Title: %s\n",b[i].title);
        printf("Author: %s\n",b[i].author);
        printf("Price: %d\n",b[i].price);
    }
   
    return 0;
}
