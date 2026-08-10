// Q : to cahnge the value of a variable to ten times of its current value  

#include<stdio.h>

void change_to_Thirty_times(int* a);

void change_to_Thirty_times(int* a){
    // n = 30;
    *a = *a * 30;
}

int main(){
    int x = 30;
    printf("The value of x is %d\n", x);
    change_to_Thirty_times(&x);
    printf("The value of x is %d\n", x);
    return 0;
}
