//factorial
#include<stdio.h>
//5! = 5 x 4 x 3 x 2 x 1
//n! = 1 x 2 x 3 x 4 x 5 x ... x n
//0! =

int main(){
    int pdt = 1;
    int n = 1;
    for (int i = 1; i <= n; i++)
    {
        pdt *= i;
    }
    printf("The factorial of %d is %d",n,pdt);
    return 0;
}
