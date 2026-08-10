//sum of first n natural numbers
#include<stdio.h>

int main(){
    int i = 1;
    int n = 15;
    int sum = 0;
    while(i<=n){
        sum +=i;
        i++;
    }
    printf("The sum of first %d natural numbers is %d",n, sum);
    return 0;
}