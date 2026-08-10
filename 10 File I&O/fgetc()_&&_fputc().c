#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("vishnu.txt", "a");
    // char c = fgetc(ptr); //Used to read character from file
    // printf("%c", c);
    fputc('A', ptr);

    fclose(ptr);

    return 0;
}