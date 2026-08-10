// write a program using a function to find average of three numbers

#include<stdio.h>

float average(int a, int b, int c);

float average(int a, int b, int c){
    return (a+b+c)/3.0;
}



int main(){
    // int a = 3,b = 6,c = 5;
    int a,b,c;
    printf("Enter the value of a :");
    scanf("%d", a);
    printf("Enter the value of b :");
    scanf("%d", b);
    printf("Enter the value of c :");
    scanf("%d", c);
    printf("The average of a, b and c is %f",average(a, b, c));
    return 0;
}