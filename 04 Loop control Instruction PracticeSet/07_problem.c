//factorial using while loop 
#include<stdio.h>
//5! = 5 x 4 x 3 x 2 x 1
//n! = 1 x 2 x 3 x 4 x 5 x ... x n
//0! =

int main(){
    int i = 1;
    int pdt = 1;
    int n = 4;
    while(i <= n)
    {
        pdt *= i;
        i++;
    }
    printf("The factorial is %d",pdt);
    return 0;
}
