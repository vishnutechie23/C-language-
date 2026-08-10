// #include <stdio.h>
// // Function prototype
// int sum(int, int);

// // Function defination
// int sum(int x, int y) // x and y are parameters
// {
//     // printf("The sum is %d\n", x+y);
//     return x + y;
// }

// int main()
// {
//     int c = sum(1,4); // Function call a,b are arguments here 
//     printf("%d\n", c);

//     return 0;
// }


#include<stdio.h>

int change(int a);

int change(int a){
    a = 70; //misnomer
    return 0;
}

int main(){
    int b = 30;
    change(b); // The value of b remains 30
    printf("b is %d", b);

    return 0;
}



