#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

int main(int argc,char* argv[])
{
	char sz_str[] = "hello,welcome the linux world!";
	char sz_filename[] = "hello.txt";
	int fd = -1;
	int res = 0;
	char buf[128] = {0};

	fd = open(sz_filename,O_WRONLY|O_CREAT,
			S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH);
	if(fd < 0){
		printf("open file\"%s\"failed,errno =  %d.\n",
		sz_filename,errno);
		return -1;
	}

	res = write(fd,sz_str,sizeof(sz_str));
	printf("write %d byte to \"%s\".\n",res,sz_filename);
	fsync(fd);
	close(fd);

	fd = open(sz_filename,O_RDONLY);
	if(fd < 0){
		printf("open file \"%s\" failed,errno=%d.\n",
				sz_filename,errno);
		return -1;
	}

	res = read(fd,buf,sizeof(buf));
	buf[res] = '\0';
	printf("read %d bytes from file \"%s\",data=\"%s\"\n ",
		res,sz_filename,buf);
	close(fd);

	return 0;
}
