#include <stdio.h>
#include <stdlib.h>

int main() {
    float n = 5;
    float* ptr;
    // scanf("%d", &n);
    ptr = (float*)malloc(n* sizeof(float));

    ptr[0] = 3.432;
    ptr[1] = 16.34;
    ptr[2] = 6.54;
    ptr[3] = 56.32534;
    ptr[4] = 66.7654;

    printf("%.2f\n", ptr[0]);
    printf("%.2f\n", ptr[1]);
    printf("%.2f\n", ptr[2]);
    printf("%.2f\n", ptr[3]);
    printf("%.2f\n", ptr[4]);
    return 0;
}