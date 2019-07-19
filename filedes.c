#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main(){
	FILE *file ;
	file = fopen("/etc/passwd","r") ;
	execl("/bin/sh","shell",NULL);
	return 0 ;
}