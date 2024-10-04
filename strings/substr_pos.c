#include <stdio.h>
#include<string.h>
#define MAX 20
 
int main() {
 
    char str[MAX], substr[MAX];
    char *found;
 
    printf("Enter the string: \n");
    fgets(str,MAX,stdin);
 
    printf("Enter substring to find: \n");
    fgets(substr,MAX,stdin);
 
    found = strstr(str,substr);
    if(found)
        printf("\nSubstring is found at index %ld\n",found-str);
    else
        printf("Substring not found.");
 
    return 0;
}
