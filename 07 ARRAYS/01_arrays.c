#include<stdio.h>

int main(){
    int marks[90];//Reserve space upto 90 intergers

    marks[0] = 95;
    marks[1] = 90;
    marks[2] = 85;
    // We can go all the way till marks[89]
    
    printf("Makrs 0 and marks 1 is %d %d", marks[0], marks[1]);
    return 0;
}