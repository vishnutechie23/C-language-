// write a program to read a text file character by character and write its content twice in separate file
#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr;
    FILE *ptr2;
    ptr = fopen("vishnu.txt", "r");
    ptr2 = fopen("vishnu1.txt", "a");
    while (1)
    {
        ch = fgetc(ptr);
        // when all the content of a file has been read break
        if (ch == EOF)
        {
            break;
        }
        else
        {
            // ch = fgetc(ptr); // ?? aa rha hai 
            fprintf(ptr2, "%c", ch);
            fprintf(ptr2, "%c", ch);
            printf("%c", ch);
        }
    }
    return 0;
}