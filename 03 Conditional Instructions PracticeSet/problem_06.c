#include<stdio.h>

int main(){
    int a=19,b=18,c=14,d=110;
    if(a>b && a>c && a>d){
        printf("Greatest of all is %d", a);
    }
    else if(b>c && b>a && b>d){
        printf("Greatest of all is %d", b);
    }
    else if(c>a && c>b && c>d){
        printf("Greatest of all is %d", c);
    }
    else if(d>a && d>b && d>c){
        printf("Greatest of all is %d", d);
    }
    return 0;
}