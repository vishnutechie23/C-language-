// #include <stdio.h>

// int main() {
//     typedef int vishnu;//apna data type bana lo
//     vishnu a = 100;
//     printf("The value of a is : %d\n",a);

//     return 0;
// }

// most use in structure

#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[10];
} Emp;

int main()
{
    // struct employee e1;
    // typedef struct employee Emp;// ye bhi kar sakte hai
    Emp e1;
    Emp *ptr1 = &e1;
    e1.code = 45;
    strcpy(e1.name, "vishnu");
    e1.salary = 90.98;

    printf("%d %f %s\n", e1.code, e1.salary, e1.name);
    printf("%d %f %s\n", ptr1->code, ptr1->salary, ptr1->name);

    return 0;
}
