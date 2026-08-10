/* INSTRUCTIONS AND OPERATORS :
TYPE OF INSTRUCTIONS
1.TYPE OF DECLARATION INSTRUCTION
2.ARITHMETIC INSTRUCTION
3.CONTROL INSTRUCTION 
*/

// TYPE DECLARATION INSTRUCTION :

#include<stdio.h>

int main(){
    int i = 10; // Declare and initialize 'i' with 10
    int j = i;
    int a = 2, b = 3, c = 4, d = 5;
    //%d called format specifier 
    //%d is for int, %f is for float, %c is for char 
    printf("The value of i is %d and value of j is %d\n", i, j);
    printf("The value of a is %d, value of b is %d, value of c is %d, value of d is %d\n", a, b, c, d);
    // float b = a + 3; INVALID : "a" is used before declaration 
    // float a = 1.1; INVALID : "a" is used before declaration 
    int p, q, r, s;
    p = q = r = s = 30; // VALID : ALL have equal values 
    printf("The value of p is %d, value of q is %d, value of r is %d, value of s is %d", p, q, r, s);
    return 0;
}


