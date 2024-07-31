#include <limits.h>
#include <stdio.h>
#include <unistd.h>

// Implements a program that prints the path of the current working directory
int main(void)
{
    // Declares an array path of type char and size PATH_MAX (varies by operating system)
    char path[PATH_MAX];

    // Intialize path to the current working directory by char
    if (getcwd(path, sizeof(path)) == NULL)
    {
        printf("Error: Get Current Directory Failed\n");
        return 1;
    }

    // Print the current working directory to the terminal if it exists
    printf("%s\n", path);
    return 0;
}
