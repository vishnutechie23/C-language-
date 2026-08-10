/*create an array dynamically capable of storing 5 integer. now use realloc so thet it can now store 10 integers.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n = 5;
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("The array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    n = 10;
    ptr = (int *)realloc(ptr, 10 * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("The array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}