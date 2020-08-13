#include<unistd.h>
#include<stdio.h>
#include<errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>



int main()
{
	int ret;

	ret = open("kernel",O_RDONLY);
	if (ret < 0)
	{
	perror("Open Fails");
	printf("errno:%d\n",errno);
	return -1;
	}
	printf("ret:%d \n",ret);
	return 0;
}

