#include <unistd.h> 
#include <fcntl.h>  
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h> 
#include <errno.h>  
#include <string.h> 

/**
 * create_file - the function
 * 
 * @filename: filename 
 * @text_content: letters 
 * Return: return the values
 */

int create_file(const char *filename, char *text_content)
{
    int filedescriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    ssize_t text_length = (text_content != NULL) ? strlen(text_content) : 0;
    ssize_t totalBytes = 0;
    ssize_t bytesLeft = text_length;
    ssize_t bytes_written;

    if (filename == NULL)
    {
        return (-1);
    }

    
    if (filedescriptor == -1)
    {
        return -1;
    }

    while (bytesLeft > 0)
    {
        bytes_written = write(filedescriptor, text_content + totalBytes, bytesLeft);
        
        if (bytes_written == -1)
        {
            if (errno == EINTR)
            {
                continue; 
            }
            else
            {
                close(filedescriptor);
                return (-1);
            }
        }

        totalBytes += bytes_written;
        bytesLeft -= bytes_written;
    }

    close(filedescriptor);
    return (1);
}
