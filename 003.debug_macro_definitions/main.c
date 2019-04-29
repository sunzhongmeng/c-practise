#include <stdio.h>

#define log(fmt,arg...) printf("--Info--In function:%s--at line:%d--"fmt"\n",__FUNCTION__,__LINE__,##arg);
int main(int argc,char* argv[])
{
	printf("__DATE__ = %s\n",__DATE__);
	printf("__TIME__ = %s\n",__TIME__);
	printf("__FILE__ = %s\n",__FILE__);
	printf("__FUNCTION__ = %s\n",__FUNCTION__);
	printf("__LINE__ = %d\n",__LINE__);
	log("custom printf");
	return 0;
}
