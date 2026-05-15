#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
    int i;
    int fd;
    char buffer[1024];
    int bytes;

    i = 1;
    while (i < argc)
    {
        fd = open(argv[i], O_RDONLY);

        if (fd != -1)
        {
            while ((bytes = read(fd, buffer, 1024)) > 0)
                write(1, buffer, bytes);

            close(fd);
        }

        i++;
    }
    return 0;
}