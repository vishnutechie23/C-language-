#include <stdio.h>

int main(){

    // char st[] = {'a', 'b', 'c', '\0'};
    // printf("First character is %c \n", st[0]);
    char st[] = "abc";//SAME hai null character automatic aa jata hai 


    for (int i = 0; i <= 3; i++)
    {
        printf("Character is %c \n", st[i]);
   
    }
    

    return 0;
}

//Terminated via a null charachter 