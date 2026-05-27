#include <stdio.h>

// Pass by refference

void fun_pass_by_value(int* y)
{
    *y = 20;
    //printf("Main Function ar variable y(%d) ar location = %p\n", y, &y);
}
int main(){
    int x = 10;

    fun_pass_by_value(&x);
    printf("%d", x);

    //printf("Main Function ar variable x(%d) ar location = %p\n", x, &x);
    return 0;
}
