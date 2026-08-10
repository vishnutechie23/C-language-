#include<stdio.h>

// %p : for address 
// %u : for address in interger 

int main(){
    int i = 72;
    int* j = &i; // j is a pointer pointing to i  ||  j is an integer pointer 
    int k = 67;
    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j); // j only stores address of i but uska bhi apna address hai it only work as pointers 
    printf("The address of j is %p\n", &j);
    printf("The address of k is %u\n", &k);


    printf("The value at address j is %d\n", *(&i));
    return 0;
}