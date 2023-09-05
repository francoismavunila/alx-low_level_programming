#include <unistd.h> 
#include <fcntl.h>  
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h> 
#include <errno.h>  
#include <string.h> 
#include <sys/syscall.h> 
#include <stdio.h> 

#define BUFF_SIZE 1024

void error(int code, const char *message)
{
    dprintf(STDERR_FILENO, "Error: %s\n", message);
    exit(code);
}

int main(int argc, char *argv[])
{
    const char *file_from = argv[1];
    const char *file_to = argv[2];
    int fd_from, fd_to; 
    char buff[BUFF_SIZE];
    ssize_t x;
    ssize_t y;

    if(argc != 3)
    {
        error(97,"Usage: cp file_from file_to");
    }
    fd_from= open(file_from, O_RDONLY);
    if(fd_from == -1)
    {
        error(98,"Error: Can't read from file NAME_OF_THE_FILE");
    }
    else
    {
        fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
        if (fd_to == -1)
            {
                close(fd_from);
                error(99, "Can't write to NAME_OF_THE_FILE");
            }
            while ((x = read(fd_from, buff, BUFF_SIZE)) > 0)
                {
                    y = write(fd_to, buff, x);
                    if (y == -1)
                    {
                        close(fd_from);
                        close(fd_to);
                        error(99, "Can't write to NAME_OF_THE_FILE");
                    }

                    if (y != x)
                    {
                        close(fd_from);
                        close(fd_to);
                        error(99, "Incomplete write");
                    }
                }
    }
    return(0);
}


