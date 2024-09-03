// Printing grade and score of a student

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int score; //reading score of student
	char grade; //reading grade of student

	printf("Enter score and grade of the student: ");
	scanf("%d %c",&score,&grade);
	printf("The score of student is %d and grade is %c\n",score,grade);

	return EXIT_SUCCESS;
}
