#include<stdio.h>
#include<stdlib.h>
#define MAX 6

struct salesInfo
{
	char id[MAX];
	int amt;
};

int main()
{
	int r;

	printf("enter how many records: ");
	scanf("%d",&r);
	while(getchar() != '\n');
	struct salesInfo var[r];
	printf("enter the records: ");
	for(int i=0;i<r;i++)
		scanf("%s-%d",&var[i].id,&var[i].amt);
	while(getchar() != '\n');
	for(int i=0;i<r;i++)
		printf("%s-%d\n",var[i].id,var[i].amt);

	return EXIT_SUCCESS;
}
