#include <unistd.h>
#include <fcntl.h>

int get_file_descriptor(char *path_file)
{
    int fd;

    fd = open(path_file, O_RDONLY);
    if (fd == -1)
    {
        write(1, "Cannot read file.\n", 18);
        return (-1);
    }
    return (fd);
}

void display_file(int fd)
{
    char c;
    int count_read;

    count_read = read(fd, &c, 1);
    while(count_read != 0)
    {
        write(1, &c, 1);
        count_read = read(fd, &c, 1);
    }
}

void process_file(char *path_file)
{
    int fd;

    fd = get_file_descriptor(path_file);
    if (fd != -1)
    {
        display_file(fd);
        if (close(fd) == -1)
            write(1, "Cannot close the file\n", 22);
    }
}

int main(int argc, char **argv)
{
    if (argc > 2)
        write(1, "Too many arguments.\n", 20);
    else if (argc == 2)
        process_file(argv[1]);
    else 
        write(1, "File name missing.\n", 19);
    return (0);
}
