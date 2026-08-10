#include<stdio.h>

int main(){

    // POINTER ARITHMETIC USING INTEGER POINTER : int = 4 bytes 
    // int a = 5;
    // int *ptr = &a;
    // printf("The address of a is %u\n", &a);
    // printf("The address of a is %u\n", ptr);
    // ptr++;
    // printf("The value of ptr is %u\n", ptr); // jitna bhi bytes ye pointer is archetecture mai le rha hai utni baar ye increment ho jayega 


    
    // POINTER ARITHMETIC USING CHARCTER POINTER : char = 1 bytes 
    
    char a = 'A';
    char *ptr = &a;
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", ptr);
    // ptr--;
    ptr++;
    printf("The value of ptr is %u\n", ptr); // jitna bhi bytes ye pointer is archetecture mai le rha hai utni baar ye increment ho jayega 
 

    return 0;
}


