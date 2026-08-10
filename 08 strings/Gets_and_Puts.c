#include <stdio.h>

int main(){

    char st[20];
    gets(st);
    // printf("%s", st);

    puts(st); // print string and come to next line
    printf("HELLO !");

    return 0;
}

//don't use gets due to buffer overflow prob so use fgets
