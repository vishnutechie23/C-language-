#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("vishnu.txt", "a");// this will append
    // fptr = fopen("vishnu.txt", "w");// te file ko khali kar dega fir likhega
    int num = 123454321;
    fprintf(fptr, "%d", num);
    
    fclose(fptr);
    
    return 0;
}