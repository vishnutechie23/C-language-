#include<stdio.h>

int main(){
    int marks[] = {12,23,43,21};
    // int * ptr = &marks[0];
    int * ptr = marks; // both are same 

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("The marks at index %d is %d\n", i, marks[i]);
    // }
    
    for (int i = 0; i < 4; i++)
    {
        // printf("The marks at index %d is %d\n", i, marks[i]);
        printf("The marks at index %d is %d\n", i, *ptr);
        ptr++;

    }
    

    return 0;
}