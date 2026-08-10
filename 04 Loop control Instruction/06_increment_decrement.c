#include<stdio.h>

int main(){
    int i = 5;
    printf("The value of i is %d\n", i);

    i+=2; // same as i = i + 2
    printf("The value of i is %d\n", i);

    // i = i + 5;//10
    // printf("The value of i is %d\n", i);
    // i++;//++i --> 11
    // printf("The value of i is %d\n", i);
    // // ++i;//12
    // printf("The value of i is %d\n", i++);
    // printf("The value of i is %d\n", i);
    // printf("The value of i is %d\n", ++i);
    // printf("The value of i is %d\n", i);
    // return 0;
}

// i++ : prints i first and then increments i (post increments Operators) 
// ++i : increments i first and then prints i (post increments Operators) 