#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    float a, b, result;
    int operation;
    system("cls");
    printf("\t\t======/// Welcome to Calculator ///=======\n");
    printf("Choose the operation by entering number designated to it:\n\n");
    printf("1.Addition\t2.Subtraction\t\t3.Multiplication\t4.Division\n\n");
    scanf("%d", &operation);
    system("cls");
    printf("Enter any two numbers:");
    scanf("%f%f", &a, &b);
    switch (operation)
    {
    case 1:
        result = a + b;
        printf("Sum=%f", result);
        break;
    case 2:
        result = a - b;
        printf("Difference=%f", result);
        break;
    case 3:
        result = a * b;
        printf("Product=%f", result);
        break;
    case 4:
        result = a / b;
        printf("Quotient=%f", result);
        break;
    }
    getch();
    return 0;
}