// Q : write afunction and pass the value by reference  

#include<stdio.h>

void change_to_ten_times(int* a);

void change_to_ten_times(int* a){
    // n = 30;
    *a = *a * 10;
}

int main(){
    int x = 30;
    printf("The value of x is %d\n", x);
    change_to_ten_times(&x);
    printf("The value of x is %d\n", x);
    return 0;
}


