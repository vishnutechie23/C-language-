#include<stdio.h>

int main(){
    char i = 'A';
    char* j = &i; // j is a pointer pointing to i  ||  j is an character pointer

    float k = 5.234;
    float* k1 = &k;

    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j); // j only stores address of i but uska bhi apna address hai it only work as pointers 
    printf("The address of j is %p\n", &j);


    printf("The value at address j is %d\n", *(&i));
    return 0;
}



