#include<stdio.h>

int main(){
    int age = 15;
    if (age > 10){
        printf("we are inside if - 1\n");
        printf("Your age is greter than 10");
    }

    if (age % 5 == 0){
        printf("\nwe are inside if - 2 \n");
        printf("Your age is divisible by 5");
    }
    return 0;
}

