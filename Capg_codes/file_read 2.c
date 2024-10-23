#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   int ret_val = 0;
   FILE *fptr;

   if ((fptr = fopen("test.txt","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

   ret_val = fscanf(fptr,"%d", &num);
	if(EOF == ret_val) /* EOF reached */
  	{
   		printf("Read Failed\n");
   		return EXIT_FAILURE;
  	}	
   printf("Value of n=%d", num);
   ret_val= fclose(fptr); 
   if(0 != ret_val)
 	{
  		printf("Closing the file failed\n");
 		 return 0;
 	}
  
   return 0;
}

