#include <stdio.h>
// Function prototype
int sum(int, int);

// Function defination
int sum(int x, int y) // x and y are parameters
{
    // printf("The sum is %d\n", x+y);
    return x + y;
}

int main()
{
    int a = 1;
    int b = 2;

    // int c = a + b;
    // printf("The sum is %d\n", c);
    int c = sum(a, b); // Function call a,b are arguments here 
    printf("%d", c);

    int a1 = 3;
    int b1 = 4;

    // int c1 = a + b;
    // printf("The sum is %d\n", c1);
    sum(a1, b1);

    return 0;
}