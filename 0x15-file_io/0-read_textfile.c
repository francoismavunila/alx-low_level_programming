#include <unistd.h> 
#include <fcntl.h>  
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h> 
#include <errno.h>  
#include <string.h> 
/**
 * read_textfile - the function
 * 
 * @filename: filename 
 * @letters: letters 
 * Return: return the values
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedescriptor = open(filename, O_RDONLY);
    char *buffer = (char *)malloc(letters);
    ssize_t total_bytes_read = 0;
    ssize_t remaining_bytes = letters;
    ssize_t bytes_written;

    if (filename == NULL)
    {
        return 0;
    }

    if (filedescriptor == -1)
    {
        return 0;
    }
   
    if (buffer == NULL)
    {
        close(filedescriptor);
        return 0;
    }


    while (remaining_bytes > 0)
    {
        ssize_t bytes_read = read(filedescriptor, buffer + total_bytes_read, remaining_bytes);

        if (bytes_read == -1) {
            if (errno == EINTR) {
                continue;  // Retry if interrupted
            }
            else {
                close(filedescriptor);
                free(buffer);
                return 0;
            }
        }
        else if (bytes_read == 0) {
            break;  // End of file reached
        }

        total_bytes_read += bytes_read;
        remaining_bytes -= bytes_read;
    }

    bytes_written = write(STDOUT_FILENO, buffer, total_bytes_read);

    if (bytes_written == -1 || bytes_written != total_bytes_read) {
        close(filedescriptor);
        free(buffer);
        return 0;
    }

    close(filedescriptor);
    free(buffer);
    return total_bytes_read;
}
