#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sum(num1, num2);
    diff(num1, num2);
    prod(num1, num2);
    div(num1, num2);
}
void sum(int a, int b)
{
    printf("Sum: %d\n", a + b);
}
void diff(int a, int b)
{
    printf("Difference: %d\n", a - b);
}
void prod(int a, int b)
{
    printf("Product: %d\n", a * b);
}
void div(int a, int b)
{
    if (b != 0)
    {
        printf("Division: %.2f\n", (float)a / b);
    }
    else
    {
        printf("Division by zero is not allowed.\n");
    }
}