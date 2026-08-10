//sum of first n natural numbers with do while loop 
// #include<stdio.h>

// int main(){
//     int i = 1;
//     int n = 15;
//     int sum = 0;
//     do{
//         sum +=i;
//         i++;
//     }
//     while(i<=n);
//     printf("The sum of first %d natural numbers is %d",n, sum);
//     return 0;
// }


//sum of first n natural numbers with for loop 

#include<stdio.h>

int main(){
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    printf("The sum of first 10 natural numbers is %d", sum);
    return 0;
}
