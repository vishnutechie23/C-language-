// Create a two dimensional vector using structure in C


#include <stdio.h>

struct vector
{
    int i;
    int j;
    int k;
};


int main() {
    struct vector v = {1, 2};
    struct vector k = {1, 2, 3};
    printf("The value of vector is %di + %dj\n", v.i, v.j);
    // printf("The value of vector is %di + %dj + %dk\n", k.i, k.j, k.k);
    return 0;
}
