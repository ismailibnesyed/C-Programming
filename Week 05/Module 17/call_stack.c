#include <stdio.h>
#include <string.h>
void mello()
{
    printf("Mello\n");
}
void gallo()
{
    printf("Gallo\n");
    mello();
}
void hello()
{
    printf("Hello\n");
    gallo();
}
int main(){
    printf("Hi\n");
    hello();
    return 0;
}
