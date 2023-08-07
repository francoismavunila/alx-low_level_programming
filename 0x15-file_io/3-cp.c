#include <unistd.h> 
#include <fcntl.h>  
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h> 
#include <errno.h>  
#include <string.h> 
#include <sys/syscall.h> 
#include <stdio.h> 

/**
 * errorHandler - handling errors
 * main- the main function
 * @filename: filename 
 * @text_content: letters 
 * Return: return the values
 */

#define BUFF_SIZE 1024

void errorHandler(int code, const char *message)
{
    dprintf(STDERR_FILENO, "Error: %s\n", message);
    exit(code);
}

int main(int argc, char *argv[])
{
    const char *file_from = argv[1];
    const char *file_to = argv[2];
    int filedescrFrom = open(file_from, O_RDONLY);
    int filedescrTo;
    char buff[BUFF_SIZE];
    ssize_t br;
    ssize_t bw;

    if (argc != 3)
    {
        errorHandler(97, "Usage: cp file_from file_to");
    }


    
    if (filedescrFrom == -1)
    {
        errorHandler(98, strerror(errno));
    }

    filedescrTo = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (filedescrTo == -1)
    {
        close(filedescrFrom);
        errorHandler(99, strerror(errno));
    }



    while ((br = read(filedescrFrom, buff, BUFF_SIZE)) > 0)
    {
        bw = write(filedescrTo, buff, br);
        if (bw == -1)
        {
            close(filedescrFrom);
            close(filedescrTo);
            errorHandler(99, strerror(errno));
        }

        if (bw != br)
        {
            close(filedescrFrom);
            close(filedescrTo);
            errorHandler(99, "Incomplete write");
        }
    }

    if (br == -1) {
        close(filedescrFrom);
        close(filedescrTo);
        errorHandler(98, strerror(errno));
    }

    if (close(filedescrFrom) == -1) {
        errorHandler(100, strerror(errno));
    }

    if (close(filedescrTo) == -1) {
        errorHandler(100, strerror(errno));
    }

    return 0;
}
