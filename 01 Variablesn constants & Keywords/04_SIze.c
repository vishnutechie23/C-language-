#include <stdio.h>

int main() {
    printf("%zu\n", sizeof(int));    // 4
    printf("%zu\n", sizeof(char));   // 1
    printf("%zu\n", sizeof(float));  // 4
    return 0;
}