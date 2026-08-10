#include <stdio.h>

struct employee
{
    int code; // This declares a new user defined data type !
    float salary;
    char name[10];
};


int main() {
    struct employee e1;
    e1.code = 45;
    struct employee *ptr;
    ptr = &e1;
    //now we can print structure elements using :
    // printf("%d",(*ptr).code);//star andar laganeka (*ptr)
    printf("%d",ptr->code);//ARROW OPERATOR : exactly same as (*ptr)

    return 0;
}


