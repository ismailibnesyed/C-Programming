#include<stdio.h>
#include<math.h>

int main()
{
    int a;
    float b;
    scanf("%d", &a);
    scanf("%f", &b);
    int sum = a + b ;
    int sub = a - b ;
    int mul = a*b;
    printf("Sum = %d\n", sum);
    printf("Subtraction = %d\n", sub);
    printf("Multiplication = %d\n", mul);
    return 0;
}