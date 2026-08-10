// function to convert celcius to fahrenheit 

#include<stdio.h>

float c2f(float);

float c2f(float c){
    return ((9*c)/5) + 32;
}


int main(){
    float c = 45;
    printf("Celcius to fahrenheit for %f is %.2f", c, c2f(c)); //.0f gives int like value 
    return 0;
}
