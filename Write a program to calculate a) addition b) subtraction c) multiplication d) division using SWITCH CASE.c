#include <stdio.h>
int main()
{
    int choice;
    int a= 15, b= 15;
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("Enter your choice:");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
        printf("sum = %d",a+b);
        break;

        case 2:
        printf("difference=%d",a-b);
        break;

        case 3:
        printf("product=%d",a*b);
        break;

        case 4:
        printf("divesion=%d", a/b);
        break;


    }
    return 0;
}
