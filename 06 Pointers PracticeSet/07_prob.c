// Q : write afunction and pass the value then it will not change cuz value pass kr rhe hai or prob 4 mai address pass kar rhe hai 

#include<stdio.h>

void change_to_Thirty_times(int a);

void change_to_Thirty_times(int a){
    // n = 30;
    a = a * 30;
}

int main(){
    int x = 30;
    printf("The value of x is %d\n", x);
    change_to_Thirty_times(x);
    printf("The value of x is %d\n", x);
    return 0;
}


