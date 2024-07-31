#include <dirent.h>
#include <stdint.h>
#include <stdio.h>
#include <sys/stat.h>

// Implement the Linux ls command-line program, with additional stats, for portability on any operating system
int main(int argc, char *argv[])
{
    // Declare a pointer stream, entry, stats of DIR (directory stream), struct dirent (directory entry),
    // and struct stat (file stats)
    DIR *stream;
    struct dirent *entry;
    struct stat *stats;

    // Ensure proper usage
    if (argc == 1)
    {
        stream = opendir(".");
    }
    else if (argc == 2)
    {
        stream = opendir(argv[1]);
    }
    else
    {
        printf("Usage: ./ls50 [path]\n");
        return 1;
    }

    // Ensures stream points to an existant directory stream
    if (stream == NULL)
    {
        printf("Error: Get Directory Stream Failed\n");
        return 2;
    }

    // Prints each directory entry by name, type, inode number, size, user id, and device number
    while((entry = readdir(stream)) != NULL)
    {
        stat(entry->d_name, stats);
        printf("%s (Name)  %u (Type and Mode)  %ju (Inode Number)  %lli (Size in Bytes)  %u (User ID)  %u (Device Number)\n",
                entry->d_name, stats->st_mode, (uintmax_t) entry->d_ino, stats->st_size, stats->st_uid, stats->st_dev);
    }
    return 0;
}
