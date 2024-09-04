// Character is a vowel or a consonant

#include<stdio.h>
#include<stdlib.h>

int main()
{
	char c; //taking input to check

	printf("Enter a character: ");
	scanf("%c",&c);

	switch(c)
	{
		case 'a':
			printf("%c is a vowel.\n",c);
			break;
		case 'e':
			printf("%c is a vowel.\n",c);
			break;
		case 'i':
			printf("%c is a vowel.\n",c);
			break;
		case 'o':
			printf("%c is a vowel.\n",c);
			break;
		case 'u':
			printf("%c is a vowel.\n",c);
			break;
		case 'A':
			printf("%c is a vowel.\n",c);
			break;
		case 'E':
			printf("%c is a vowel.\n",c);
			break;
		case 'I':
			printf("%c is a vowel.\n",c);
			break;
		case 'O':
			printf("%c is a vowel.\n",c);
			break;
		case 'U':
			printf("%c is a vowel.\n",c);
			break;
		default:
			printf("%c is a consonant.\n",c);
			break;
	}

	return EXIT_SUCCESS;
}
