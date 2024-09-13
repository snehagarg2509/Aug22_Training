// Deleting duplicates from an array

#include<stdio.h>
#include<stdlib.h>

 
int main() {
 
    int a[] = {1,1,1,2,2,3,3,4};
    int ans[] = {};
    int n = sizeof(a)/sizeof(int);
    int k = 0;
 
    for(int i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
        {
            ans[k] = a[i];
            k++;
        }
    }
    ans[k] = a[n-1];
 
    for(int i=0;i<=k;i++)
        printf("%d",ans[i]);
 
	return EXIT_SUCCESS;
}
