#include <stdio.h>
#include <string.h>
#define MAX 50
int main()
{
    char str[5][50];
    char lex[50];
    int i=0,j=0;
    printf("Enter 5 words: \n");
    for(i=0;i<5;i++)
        fgets(str[i],6,stdin);
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(lex,str[i]);
                strcpy(str[i],str[j]); //swapping
                strcpy(str[j],lex);
            }
        }
    }
    printf("Lexicographic order:\n");
    for(i=0;i<5;i++)
        printf("%s",str[i]);
    return 0;
}
