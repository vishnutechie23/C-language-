
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int* ptr;
    scanf("%d", &n);
    ptr = (int*)malloc(n * sizeof(int));

    ptr[0] = 3;
    // ptr[1] = 6;
    // free(ptr); // throws garbage value which demonstrates that ki free kar deta hai valulr ko 
    printf("%d", ptr[0]);
    free(ptr);
    return 0;
}
