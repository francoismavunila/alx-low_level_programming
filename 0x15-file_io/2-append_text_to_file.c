#include <unistd.h> 
#include <fcntl.h>  
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h> 
#include <errno.h> 
#include <string.h> 

/**
 * append_text_to_file - the function
 * 
 * @filename: filename 
 * @text_content: letters 
 * Return: return the values
 */

int append_text_to_file(const char *filename, char *text_content)
{
    int ledescriptor = open(filename, O_WRONLY | O_APPEND);
    ssize_t text_length ;
    ssize_t total_bytes_written;
    ssize_t remaining_bytes;

    if (filename == NULL)
    {
        return -1;
    }

    if (ledescriptor == -1)
    {
        return -1;
    }

    if (text_content != NULL)
    {
        text_length = strlen(text_content);
        total_bytes_written = 0;
        remaining_bytes = text_length;

        while (remaining_bytes > 0)
        {
            ssize_t bytes_written = write(ledescriptor, text_content + total_bytes_written, remaining_bytes);

            if (bytes_written == -1)
            {
                if (errno == EINTR)
                {
                    continue; 
                }
                else
                {
                    close(ledescriptor);
                    return (-1);
                }
            }

            total_bytes_written += bytes_written;
            remaining_bytes -= bytes_written;
        }
    }

    close(ledescriptor);
    return 1;
}
