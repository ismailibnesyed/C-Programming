#include <stdio.h>
// who call his own function is called recursion
// Infinite loop
void hello()
{
    printf("Hello\n");
    //hello(); its an infinite loop
}
int main(){
    printf("Hi\n");
    hello();
    return 0;
}
