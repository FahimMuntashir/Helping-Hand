#include <stdio.h>

int sum(int num1, int num2)
{
    return num1 + num2;
}

int main()
{

    int a, b;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("sum = %d\n", sum(a, b));
}