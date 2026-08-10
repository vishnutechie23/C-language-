#include<stdio.h>

int main(){
    int marks[5];//Reserve space upto 90 intergers

    printf("Enter marks of 5 student\n");
    // scanf("%d", &marks[0]);
    // scanf("%d", &marks[1]);
    // scanf("%d", &marks[2]);
    // scanf("%d", &marks[3]);
    // scanf("%d", &marks[4]);

    // bette to do this in loop
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value of marks at index %d is %d\n", i, marks[i]);
    }
    


    // marks[0] = 95;
    // marks[1] = 90;
    // marks[2] = 85;
    // We can go all the way till marks[89]
    
    // printf("Makrs 0 and marks 1 is %d %d", marks[0], marks[1]);
    return 0;
}