#include<stdio.h> 

int main(){
    int a = 10;
    float b = 34.43;
    // a = (int) b;    //convert the data type into int 
    a = (float) b; // assing into int a so value will be int 
    printf("%d\n",a);
    return 0;
}


// #include<stdio.h>

// int main(){
//     int a = 11;
//     float b = 23.32;
//     float n = (float) a;
//     printf("%f\n",n); // convert into float 
//     return 0;
// }

//if int is printed with %f then it will give you some garbage value sa for %d ... 

// int a = 11;
// printf("%f\n", (float)a); //optimised way 
