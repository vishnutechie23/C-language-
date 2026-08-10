//write a program to contains the occurence of a given character in a string

#include <stdio.h>
#include <string.h>

int main(){

    char c = 'v';
    int contains = 0;
    char str[] = "vishnu bapu dalvi";
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i] == c){
            contains = 1;
            break;
        }
    }
    if(contains){
        printf("Yes it contains\n");
    }
    else{
        printf("doesn't contain\n");
    }
    
    // printf("%d", contains);

    return 0;
}