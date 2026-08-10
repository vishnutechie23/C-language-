// https://www.ascii-code.com/

#include<stdio.h>

int main(){
    char ch ;
    printf("Enter the charaacter : \n");
    scanf("%c",&ch);
    printf("The charcter is %c\n", ch);
    printf("The value of charcter is %d\n", ch);//97-122 
    if (ch >= 97 && ch <= 122){
        printf("This charcter is lowercase\n");
    }
    else{
        printf("This character is NOT lowercase\n");
    }
    return 0;
}