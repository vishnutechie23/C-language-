// qs1 : find area of rectanagle with hardcoded value 
#include<stdio.h>

int main(){
    int length = 3;
    int breadth = 5;
    printf("The area of this rectangle is %d",length * breadth);
    return 0;
}

// qs1 : find area of rectanagle with input value from users

#include<stdio.h>

int main(){
    int length,breadth;

    printf("Enter length\n");
    scanf("%d", &length);

    printf("Enter breadth\n");
    scanf("%d", &breadth);

    printf("The area of rectangle is %d", length*breadth);
    return 0;
}


