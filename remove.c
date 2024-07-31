#include <stdio.h>

// Implement the Linux rm -f command-line program for portability to any operating system
int main(int argc, char *argv[])
{
    // Ensure proper usage
    if (argc != 2)
    {
        printf("Usage: ./rm50 FILE\n");
        return 1;
    }

    // Removes the file agrv[1] if it exists
    return remove(argv[1]);
}
