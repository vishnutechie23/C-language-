/*Create an array of multiplication table of 7 upto 10 (7 X 10 = 70) Use realloc to make it store 15 number (from 7 X 1 to 7 X 15)*/


#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n = 10;
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7 * (i + 1);
    }
    printf("The array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    n = 15;
    ptr = (int *)realloc(ptr, 10 * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7 * (i + 1);
    }
    printf("The array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}