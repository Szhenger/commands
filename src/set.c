#include <stdio.h>
#include <stdlib.h>

// Implement the Linux mv command-line program for portability with any operating system
int main(int argc, char *argv[])
{
    // Ensure proper usage
    if (argc != 3)
    {
        printf("Usage: ./set50 source_path destination_path\n");
        return 1;
    }

    // Renames file argv[1] to file argv[2] if it exists
    return rename(argv[1], argv[2]);
}
