#include <stdio.h>
#include <string.h>

int main()
{

    // STRING LENTGH FUNCTION
    //  char st[] = "HAPPY";
    //  printf("%d", strlen(st));

    // STRING COPY INTO TARGETED STRING
    //  char st[] = "HAPPY";
    //  char target[30];
    //  strcpy(target, st);// target now contain "HAPPY"
    //  printf("%s %s", st, target);

    // STRING CONCATINATION

    // char s1[12] = "HELLO ";
    // char s2[] = "VISHNU ";
    // char s3[] = "HOW ARE YOU ?";
    // strcat(s1,s2); //s1 now contains HELLO VISHNU <no space in between>
    // printf("%s",s1);

    // STRING COMPARE
    // STRCMP()

    int a = strcmp("far", "joke"); // negative value
    int b = strcmp("joke", "far"); // positive value acc to ASCII values
    int c = strcmp("far", "far");
    // printf("%d", c); RETURNS 0 cuz equal
    printf("%d", b); // RETURNS positive
    // First vala word pahile ane vala hai toh - ve value
    // second vala word pahile ane vala hai toh + value 
    //or equal ho toh 0

    

    return 0;
}
