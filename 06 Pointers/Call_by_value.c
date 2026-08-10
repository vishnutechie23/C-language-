// TYPE OF FUNCTION CALL 
// call by value : sending the values of arguments
// call by reference : sending the address of  arguments

//call by value

#include<stdio.h>

int sum(int, int);
int sum(int a, int b){
    // *a = 6; // sum function cannot change the value cuzcopy of x is provided to sum in a 
    return a + b;
}

int main(){
    int x = 1, y = 6;
    printf("The sum of 1 and 6 is %d", sum(x,y));
    return 0;
}
