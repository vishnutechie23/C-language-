#include<stdio.h>

int sum_natural(int);

int sum_natural(int n){
    if(n == 1){
        return 1;
    }
    return sum_natural(n-1) + n;
    // sum(n) = 1 + 2 + 3 + 4 + .... + (n-1) + n;
    // sum(n) = sum(n-1) + n;
}

int main(){
    int n = 10;
    printf("The sum of first %d natural number is %d", n, sum_natural(n));
    return 0;
}