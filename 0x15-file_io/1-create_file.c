 #include <unistd.h>
 #include <stddef.h>
 #include "main.h"
 #include <fcntl.h>
 #include <stdlib.h>

int create_file(const char *filename, char *text_content)
{
    int fd, text_size =0;
    ssize_t bytes_written;
    while(text_content[text_size] != '\0')
    {
        text_size++;
    }
    if(filename == NULL)
    {
        return(-1);
    }
    fd = open(filename,O_CREAT | O_WRONLY | O_TRUNC, 0600);
    if (fd == -1) {
        return(-1);
    } else {
        bytes_written = write(fd, text_content, text_size);
        if(bytes_written == -1)
        {
            return(-1);
        }
        close(fd);
        return(1);
    }
}
