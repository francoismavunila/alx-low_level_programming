 #include <unistd.h>
 #include <stddef.h>
 #include "main.h"
 #include <fcntl.h>
 #include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
  int fd;
  char *buffer;
  ssize_t read_bytes,wr;
  if(filename == NULL)
  {
    return(0);
  }
  fd = open(filename,O_RDONLY);
  if(fd == -1)
  {
    return(0);
  }
  else
  {
    buffer = malloc(letters);
    read_bytes = read(fd,buffer,letters);
    if(read_bytes == -1)
    {
        return(0);
    }
    else
    {
        wr = write(STDOUT_FILENO, buffer, read_bytes);
        if(wr == -1)
        {
            return(0);
        }
    }
    close(fd);
    return(read_bytes);
  }
 
}
