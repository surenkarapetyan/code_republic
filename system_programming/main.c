#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

void main(){

	int fd;
	fd = open("foo", O_WRONLY | O_CREAT, 0644);
	if(fd < 0){

		printf("err %d\n", errno);
		perror("foo");
		exit(1);
	
	}
	write(fd, "hello\n", 6);
	close(fd);

}
