#include <stdio.h>
#include <string.h>
int main(int argc,char* argv[]){
	char buf[500] ;
	strcpy(buf,argv[1]);
	printf("%s",buf);
	return 0;
}
