#include <unistd.h>

int main()
{
	char *args[2];
	args[0] = "/bin/sh" ;
	args[1] = 0 ;
	execl(args[0],args[1],NULL) ;
	return 0;
}