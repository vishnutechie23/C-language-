// Qs 2 : calculate the area of circle and modify the same code to calculate the volume of cylinder given its radius and height 
#include<stdio.h>

int main(){
    int r =  6;
    int height = 10;
    printf("The area of circle with radius %d is %f", r, 3.14*r*r);
    printf("\nThe volume of cylinder with radius %d and %d is %f", r, height, 3.14*r*r*height);
    return 0;
}