#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main(){  
    FILE* fd;  
    char *v[2];  
    /* Assume that /etc/zzz is an important system file,   * and it is owned by root with permission 0644.   * Before running this program, you should create   * the file /etc/zzz first. */  
    fd = fopen("/etc/zzz","r");    
    if (fd == NULL) {     
        printf("Cannot open /etc/zzz\n");     
        exit(0);  
    }  
    // Print out the file descriptor value  
    printf("fd is %d\n", fd);  
    // Permanently disable the privilege by making the 
    // effective uid the same as the real uid  
    setuid(getuid());           
    // Execute /bin/sh  
    v[0] = "/bin/sh"; v[1] = 0;  
    execve(v[0], v, 0);        
    return 0 ;
}
