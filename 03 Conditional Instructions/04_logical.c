//CASE : 1
// #include<stdio.h>

// int main(){
//     int a = 1; int b = 1;
//     printf("The value of a and b is %d\n", a&&b);
//     printf("The value of a and b is %d\n", a||b);
//     return 0;
// }

//CASE : 2
// #include<stdio.h>

// int main(){
//     int a = 0; int b = 1;
//     printf("The value of a and b is %d\n", a&&b);
//     printf("The value of a and b is %d\n", a||b);
//     return 0;
// }

//CASE : 3
// #include<stdio.h>

// int main(){
//     int a = 1; int b = 0;
//     printf("The value of a and b is %d\n", a&&b);
//     printf("The value of a and b is %d\n", a||b);
//     return 0;
// }


//CASE : 4
#include<stdio.h>

int main(){
    int a = 1; int b = 1;
    printf("The value of a and b is %d\n", a&&b);
    printf("The value of a and b is %d\n", a||b);
    printf("The value of not(a) is %d\n", !a); // ulta kar dega value 

    if (a && b) {
        printf("both are true\n");
    }

    // Is same writting as ... 
    if (a){
        if(b){
            printf("Both are true");
        }
    }
    return 0;
}