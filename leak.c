#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main(){  
    setuid(geteuid());   
    execl("/bin/sh", "shell", NULL);        
    return 0 ;
}
