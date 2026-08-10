// ARITHMETIC INSTRUCTION : 

#include<stdio.h>

int main(){
    int a = 10, b = 5;
    int c = a + b;
    printf("The value of a is %d and value of b is %d and their sum is %d\n",a,b,c);
    //Modulus operator is used to get remainder
    printf("The remainder when a = %d is divided by b = %d is : %d", a, b, a % b);

    //This doesn't work for exponentiation in C
    // int d = a^b; will not work 

    return 0;
}
