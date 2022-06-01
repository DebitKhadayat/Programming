#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
int main()
{
    int day;
    system("cls");
    printf("enter a number\n");
    scanf("%d", &day);
    system("cls");
    system("color 0A");
    switch (day)
    {
    case 1:
        printf("sunday\n");
        break;
    case 2:
        printf("monday\n");
        break;
    case 3:
        printf("tuesday\n");
        break;
    case 4:
        printf("wednesday\n");
        break;
    case 5:
        printf("thursday\n");
        break;
    case 6:
        printf("friday\n");
        break;
    case 7:
        printf("saturday\n");
        break;
    default:
        printf("invalid\n");
    }
    getch();
}