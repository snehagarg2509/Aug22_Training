#include <stdio.h>
#include<string.h>
#define MAX 20
 
int main() {
 
    char str[MAX];
    int len;
 
    printf("Enter string you want to reverse: \n");
    fgets(str,MAX,stdin);
 
    len = strlen(str);
    printf("Reverse string is: ");
 
    for(int i = len-1;i>=0;i--)
        printf("%c",str[i]);
	printf("\n");

    return 0;
}
