#include<stdio.h>

int main(){
    int arr[3][2] = {
        (1,4),(4,5),(11,22)
    };
    printf("%d\n", arr[2]);
    return 0;
}

// #include <stdio.h>

// int main() {
//     int arr[3][2] = {
//         {1, 4},
//         {4, 5},
//         {11, 22}
//     };

//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 2; j++) {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");   // Move to next row
//     }

//     return 0;
// }