// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     int arr[n]; // Not allowed in C 
//     return 0;
// }

//MALLOC : memory allocation 
// Quiq Quiz : write a program to create a dynamic array of 5 floats using malloc()
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int* ptr;
    scanf("%d", &n);
    ptr = (int*)malloc(n* sizeof(int));

    ptr[0] = 3;
    ptr[1] = 6;
    printf("%d", ptr[0]);
    return 0;
}
