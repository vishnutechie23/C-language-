#include<stdio.h>
#include<string.h>

struct employee
{
    int code;// This declare a new user defineed data type!
    float salary;
    char name[10];
};// semicolon is important

int main(){
    struct employee e1, e2;
    e1.code = 45;
    strcpy(e1.name, "VISHNU");
    e1.salary = 54.43;

    printf("%d %f %s", e1.code, e1.salary, e1.name);
    
    return 0;
}
