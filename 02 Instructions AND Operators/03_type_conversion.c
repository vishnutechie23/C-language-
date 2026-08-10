#include<stdio.h>

int main(){
    int a = 9;
    float d = 9;
    int b = 2;
    float c = a/b;
    float e = d/b;
    int z = 6.7;
    float y = 8;
    printf("The value of z is %d\n",z);//float is demoted to int 
    printf("The value of y is %f\n",y);//int is promoted to in float 
    printf("The value of a/b is %f\n", c);// int to int will give int 
    printf("The value of d/b is %f", e);// float to int will give float 
    return 0;
}
