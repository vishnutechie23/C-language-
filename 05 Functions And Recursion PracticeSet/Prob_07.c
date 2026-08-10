#include<stdio.h>

int main(){
    int n = 3;
    for (int i = 0; i < 3; i++)
    {
        // this loop runs from 0 to 2
        // if i = 0 ---> print one star 
        // if i = 1 ---> print three star 
        // if i = 2 ---> print five star 
        // no of stars = (2*i + 1)

        //This for loop prints (2*i + 1) stars 
        for (int j = 0; j < 2*i+1; j++)
        {
            printf("*");
        }
        printf("\n");//This is for new line 
    }
    
    return 0;
}
