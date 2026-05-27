#include <stdio.h>

// no parameter and no return

// Always start work from main function

void sum()
{
    int a,b;
    scanf("%d %d", &a, &b);
    int sum = a+b;
    printf("%d", sum);
}



int main(){
    sum(); // call sum function. then works in sum function
    
    return 0;
}
