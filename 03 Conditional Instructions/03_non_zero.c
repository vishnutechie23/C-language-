#include<stdio.h>

int main(){
    if (1){
        printf("This if is executed!\n");
    }
    if (2.4){
        printf("This if is also executed!\n");
    }
    if ('v'){
        printf("This charc inside if is also  executed!");
    }
    if (0){
        printf("I'm zero and I'm Not executed!"); // 0 : False 
    }    
    return 0;
}
//In C a non-zero value is considered to be true 