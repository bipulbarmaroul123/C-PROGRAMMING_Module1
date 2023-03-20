#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<errno.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int fd;
	fd = open("hello.txt", O_RDONLY);
	if(fd == -1)
	{
		//printf("no such file");
		printf("error no is: %d", errno);
		exit(1);
		perror("error message\n");
		printf("\nerror message is: %s", strerror(errno));
	}
}

