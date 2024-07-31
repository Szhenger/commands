#include <stdio.h>

// Implements the Linux cp command-line program for portability in any operating system
int main(int argc, char *argv[])
{
    // Ensures proper usage
    if (argc != 3)
    {
        printf("Usage: ./cp50 source.txt destination.txt\n");
        return 1;
    }

    // Open the source file for reading
    FILE *src = fopen(argv[1], "r");
    if (src == NULL)
    {
        printf("Error: Cannot open source.txt\n");
        return 2;
    }

    // Open the destination file for writing
    FILE *dest = fopen(argv[2], "w");
    if (dest == NULL)
    {
        printf("Error: Cannot open destination.txt\n");
        return 3;
    }

    // Declare a buffer of a char type
    char buffer;

    // Read each char of the source file into buffer and Write into the destination file
    while ((buffer = fgetc(src)) != EOF)
    {

        fputc(buffer, dest);
    }

    // Close both the source and destination files
    fclose(src);
    fclose(dest);
    return 0;
}
