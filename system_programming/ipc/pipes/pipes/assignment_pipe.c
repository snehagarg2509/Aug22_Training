#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<string.h>
#define MAX 20
void report_and_exit(char *msg)
{
	perror(msg);
	exit(1);
}
int main(int argc , char *argv[])
{
	int pid;
	char buffer[MAX];
	char write_buf[MAX];
	if(argc!= 3)
	{
		printf("Wrong usage\n");
		exit(1);
	}
//	printf("%s\t%s\n", argv[1],argv[2]);
	int fd[2];
	if(pipe(fd) == -1) report_and_exit("pipe");
	
	if((pid=fork()) < 0) report_and_exit("Fork");

	else if( pid == 0) //chil process
	{

		close(fd[1]); //close the write end
		read(fd[0], buffer, MAX); //read from pipe
		FILE *fp;
		if((fp = fopen(argv[2], "w")) == NULL) report_and_exit("fopen");
		fputs( buffer, fp);
		fclose(fp);

		close(fd[0]);//close the read end
	}
	else  //parent
	{
		close(fd[0]);
		FILE *fp;
		int bytes_read;
		 if((fp = fopen(argv[1], "r")) == NULL) report_and_exit("fopen");
		  if (fgets(write_buf, MAX, fp) != NULL) {
			 
			 write_buf[MAX - 1] = '\0';
             write(fd[1], write_buf, strlen(write_buf) + 1); // Write to pipe
        	
	}
 		//  fgets(write_buf, MAX, fp);
		  //int len = strlen(write_buf);
		 // write_buf[len-1] = '\0';
//		  printf("%s\n", write_buf);
		 write(fd[1], write_buf, strlen(write_buf)+1);
		 fclose(fp);
		 close(fd[1]);
		
	}
}

	
		
