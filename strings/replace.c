#include<stdio.h>
#include<string.h>
#define MAX 20

int main()
{
	char str[MAX];
	char c,r;

	printf("enter a string: ");
	for(int i=0;i<MAX;i++)
		scanf("%c",&str[i]);

	int n = strlen(str);

	printf("enter the character to replace and with what: ");
	scanf("%c %c",&c,&r);

	for(int i=0;i<n;i++)
	{
		if(str[i]==c)
		{
			str[i]=r;
			break;
		}
	}
	printf("\n");

	printf("new string is:\n");
	for(int i=0;i<n;i++)
		printf("%c",str[i]);

	return 0;
}
