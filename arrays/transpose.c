#include <stdio.h>
#include <stdlib.h>
#define N 3
 
int main()
{
    int a[N][N] = {{1,2,3},{4,5,6},{7,8,9}};
    int b[N][N];
 
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            b[i][j] = a[j][i];
        }
    }
    printf("Transpose matrix is \n");
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
 
    return 0;
}
