#include <stdio.h>
#include <stdlib.h>

/**
 * read_file - Reads a file and prints its contents to the console
 * @filename: Name of the file to be read
 * @max_chars: Maximum number of characters to read from the file
 * Return: Number of characters read and printed to the console
 *         0 if the function fails or if the filename is NULL.
 */
size_t read_file(const char *filename, size_t max_chars)
{
    char *buffer;
    FILE *file;
    size_t read_count, write_count;

    if (filename == NULL)
        return (0);

    file = fopen(filename, "r");
    if (file == NULL)
        return (0);

    buffer = malloc(max_chars + 1);
    if (buffer == NULL)
    {
        fclose(file);
        return (0);
    }

    read_count = fread(buffer, sizeof(char), max_chars, file);
    write_count = fwrite(buffer, sizeof(char), read_count, stdout);

    free(buffer);
    fclose(file);

    return write_count;
}
