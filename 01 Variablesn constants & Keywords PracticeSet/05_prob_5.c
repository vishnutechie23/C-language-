#include<stdio.h>

int main(){
    int a,b,c,d,e;
    printf("Marks of maths : ");
    scanf("%d", &a);
    printf("Marks of sci : ");
    scanf("%d", &b);
    printf("Marks of history : ");
    scanf("%d", &c);
    printf("Marks of marathi : ");
    scanf("%d", &d);
    printf("Marks of english ");
    scanf("%d", &e);
    printf("THE TOTAL Percentage is : %d %", (a+b+c+d+e) / 5 );
    return 0;
}
 