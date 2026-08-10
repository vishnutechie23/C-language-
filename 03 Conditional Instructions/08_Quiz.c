/*
Write a program to find grade of a student given his marks based on below :
90-100 --> A
80-90 --> B
70-80 --> C
60-70 --> D
50-60 --> E
<50 --> F
*/

#include<stdio.h>

int main(){
    char grade;
    int marks ;
    printf("Entered marks : ");
    scanf("%d",&marks);
    if (marks > 100){
        printf("Please enter valid marks");
        return 0;
    }
        if (marks <= 100 && marks >=80){
            grade = 'A';
        }
        else if (marks <= 90 && marks >=80){
            grade = 'B';
        }
        else if (marks <= 80 && marks >=70){
            grade = 'C';
        }
        else if (marks <= 70 && marks >=60){
            grade = 'D';
        }
        else if (marks <= 60 && marks >=50){
            grade = 'E';
        }
        else if (marks<50){
            grade = 'F';
        }
        printf("Grade = %c\n", grade);
    return 0;
}