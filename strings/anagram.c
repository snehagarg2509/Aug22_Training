#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
#define MAX 50
 
bool anagram(char* str1,char* str2)
{
    int c1[256]={0};
    int c2[256]={0};
    int i;
 
    if(strlen(str1)!=strlen(str2))
        return false;
   
    for(i=0;str1[i] && str2[i];i++)
    {
        c1[(int)str1[i]]++;
        c2[(int)str2[i]]++;
    }
 
    for(i=0;i<MAX;i++)
    {
        if(c1[i]!=c2[i])
            return false;
    }
 
    return true;
}
 
int main() {
 
    char str1[MAX] = "silent";
    char str2[MAX] = "listen";
   
    if(anagram(str1,str2))
        printf("They are anagrams.\n");
    else
        printf("Not anagrams.\n");
 
 
    return EXIT_SUCCESS;
}
