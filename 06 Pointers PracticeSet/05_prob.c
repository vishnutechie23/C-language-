// Q : write a function which calculate sum and average of two numbers use pointers to print the value of a variable i by using "pointer to pointer" type of variable 

#include<stdio.h>

int* sum(int a, int b){
    int s = a + b;
    int * ptr = &s;
    printf("The sum of %d\n", s);
    return ptr;
}

float* average(int a, int b){
    float avg = (a+b)/2.0;
    float * ptr = &avg;
    printf("The average of %.2f\n", avg);
    return ptr;
}
int main(){
    int x = 4;
    int y = 6;
    int* ptr1;
    float* ptr2;

    ptr1 = sum(x,y);
    ptr2 = average(x,y);

    printf("The address of sum is %u and of average is %u", ptr1, ptr2);

    return 0;
}

// "message": "function returns address of local variable [-Wreturn-local-addr]",

// [{
// 	"resource": "/c:/C language/Chapter06(practice)/05_prob.c",
// 	"owner": "cpptools",
// 	"severity": 4,
// 	"message": "function returns address of local variable [-Wreturn-local-addr]",
// 	"source": "gcc",
// 	"startLineNumber": 14,
// 	"startColumn": 12,
// 	"endLineNumber": 14,
// 	"endColumn": 12
// }]