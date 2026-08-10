#include <stdio.h>

int main()
{
    int a = 4;
    printf("%d %d %d\n", a, ++a, a++);// evaluation order is from left to right for compiler
    // 6,6,4
    // 4,5,5 : if evaluation order is from R to L 
    return 0;
}