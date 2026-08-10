// make 5 complex number array and display it with display function value must be input from user
// complex number

#include <stdio.h>

typedef struct c
{
    int real;
    int imaginary;

} Complex;

void display(Complex c)
{
    printf("The value of Complex number is %d + %di\n", c.real, c.imaginary);
}

int main()
{
    Complex carr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter real part : \n");
        scanf("%d", &carr[i].real);
        printf("Enter imaginary part : \n");
        scanf("%d", &carr[i].imaginary);
        display(carr[i]);
    }

    return 0;
}
